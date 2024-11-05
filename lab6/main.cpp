#include <cstring>
#include <stdio.h>

int main() {

    //задача 2

    char input[200];
    char *vowel[] = {"a", "e", "i", "o", "u", "y"};
    char *consonant[] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "z"};

    printf("Please enter a string: ");
    scanf("%s", input);

    int HomManyV = 0;
    int HomManyC = 0;

    for (int i = 0; i < strlen(input); i++) {
        bool isVowel = false;

        // Перевірка, чи є символ голосною
        for (int j = 0; j < 6; j++) {  // У масиві vowel 6 елементів
            if (input[i] == vowel[j][0]) {
                HomManyV++;
                isVowel = true;
                break;  // Вийти з циклу, якщо знайдено голосну
            }
        }

        // Якщо символ не голосний, перевіряємо, чи є він приголосним
        if (!isVowel) {
            for (int j = 0; j < 21; j++) { // У масиві consonant 21 елемент
                if (input[i] == consonant[j][0]) {
                    HomManyC++;
                    break;  // Вийти з циклу, якщо знайдено приголосну
                }
            }
        }
    }

    printf("\nГолосних: %d\nПриголосних: %d\n", HomManyV, HomManyC);

    //задача 3


    int i = 0;
    int sum = 0;
    while (i <= 100) {
        if (i != 8 && i != 33) {
            sum = sum + i;
        }
        i++;
    }
    printf("%d",sum);

    //задача 4


    return 0;
}
