#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100
#define MAX_TEAM_LENGTH 15

int is_valid_email(char *email) {
    // Знаходимо '@'
    const char *sign = strchr(email, '@');
    if (!sign) {
        // Відсутність '@'
        return 0;
    }

    // Перевірка префіксу
    char buffer[MAX_LENGTH];
    strncpy(buffer, email, sign - email);
    buffer[sign - email] = '\0'; // Завершуємо рядок
    if (strlen(buffer) == 0 || !isalnum(buffer[0]) || !isalnum(buffer[strlen(buffer) - 1])) {
        return 0; // Префікс має починатися і закінчуватися буквою або цифрою
    }
    for (int i = 0; i < strlen(buffer); i++) {
        if (!isalnum(buffer[i]) || !buffer[i] == '.' || !buffer[i] == '_') {
            return 0; // Недопустимий символ у префіксі у тому числі кирилиця
        }
    }

    // Перевірка домену
    strncpy(buffer, sign + 1, strlen(email));
    char *dot = strchr(buffer, '.');
    if (!dot) return 0; // Відсутність '.'

    char *token = strtok(buffer, "."); // Розділення домену на частини
    int domain_part_count = 0;
    while (token) {
        domain_part_count++;
        if (strlen(token) == 0 || !isalpha(token[0])) {
            return 0; // Доменна частина повинна починатися з букви
        }
        for (int i = 0; i < strlen(token); i++) {
            if (!isalnum(token[i])) {
                return 0; // Домен може містити лише букви або цифри
            }
        }
        token = strtok(NULL, ".");
    }

    if (domain_part_count < 2) {
        return 0; // Мінімум 2 частини у домені
    }

    return 1;// Усі перевірки пройдено
}


int main(void) {
    char inputRow[255];
    scanf("%[^\n]", inputRow);
    char *token = strtok(inputRow, " ");

    while (token != NULL) {
        for(int i=strlen(token) - 1; i>=0;--i)
            printf("%c", token[i]);
        // printf("%s\n", token);
        printf("\n");
        token = strtok(NULL, " ");
    }

    //task 3

    char buffer[150];
    int count = 0;
    int surname_length = 0;
    int numbers[MAX_TEAM_LENGTH];
    char surnames[MAX_TEAM_LENGTH][MAX_LENGTH];
    char names[MAX_TEAM_LENGTH][MAX_LENGTH];

    printf("Введіть список у форматі 'Номер Прізвище Ім’я'. Введіть 'stop' для завершення:\n");
    while(1){
        printf("Учасник %d: ", count + 1);
        scanf(" %[^\n]", buffer);
        getchar(); // Забираємо символ '\n', щоб уникнути проблем у наступних ітераціях


        if(strcmp(buffer, "stop") == 0) {
            break;
        }

        //Parse buffer
        int i = sscanf(buffer, "%d %s %s", &numbers[count], surnames[count], names[count]);

        if (i != 3) {
            printf("Неправильний формат. Спробуйте ще раз.\n");
            continue;
        }

        count++;
        if(count > MAX_TEAM_LENGTH) {
            printf("Досягли максимальної кількості записів. \n");
            break;
        }
    }

    //Підрахунок кількості унікальних імен
    int uniq_name_count = 0;
    char unique_names[MAX_TEAM_LENGTH][MAX_LENGTH];
    for(int i = 0; i < count; i++) {
        for (int j = i; j < count; j++)
        {
            if (strcmp(names[i], names[j]) != 0) {
                uniq_name_count++;
                break;
            }
        }
    }

    //Сортування учасників за алфавітним порядком (бульбашкове сортування)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            // Порівнюємо імена
            if (strcmp(names[j], names[j + 1]) > 0 ||
                (strcmp(names[j], names[j + 1]) == 0 && strcmp(surnames[j], surnames[j + 1]) > 0)) {
                // Міняємо місцями номери
                int temp_num = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp_num;

                // Міняємо місцями імена
                char temp_name[MAX_LENGTH];
                strcpy(temp_name, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp_name);

                // Міняємо місцями прізвища
                char temp_surname[MAX_LENGTH];
                strcpy(temp_surname, surnames[j]);
                strcpy(surnames[j], surnames[j + 1]);
                strcpy(surnames[j + 1], temp_surname);
            }
        }
    }


    int avg_surname = count > 0 ? (double)surname_length / count : 0;
    printf("*******************************\n");
    printf("Кількість унікальних імен: %d\n", uniq_name_count);
    printf("Середня довжина прізвищ: %d \n", avg_surname);
    printf("Список учасників в алфавітному порядку:\n");
    for (int i = 0; i < count; i++) {
        printf("%d %s %s\n", numbers[i], names[i], surnames[i]);
    }


    char email[MAX_LENGTH];
    printf("Введіть адресу електронної пошти: ");
    scanf(" %[^\n]", email);

    if (is_valid_email(email)) {
        printf("Адреса електронної пошти правильна.\n");
    } else {
        printf("Адреса електронної пошти неправильна.\n");
    }

    return 0;
}