

#include <cmath>
#include <cstdio>

int main() {
    //
    // // Task 2
    // // Написати програму, котра видаватиме результат порівняння двох введених з клавіатури
    // // чисел з допомогою оператора «?».
    //
    // int userInputNum1, userInputNum2;
    // printf("Please enter two numbers: ");
    // scanf("%d %d", &userInputNum1, &userInputNum2);
    // userInputNum1 > userInputNum2 ? printf("Перше число більше другого") : (userInputNum1 < userInputNum2 ? printf("Друге число більше першого") : printf("Числа рівні"));
    //
    //
    // //Task 3
    // //     Написати програму, котра дозволяє ввести з консолі довжини трьох сторін трикутника
    // // (наприклад, 3 4 5) і визначити його тип: а) рівносторонній (правильний),
    // // рівнобедренний, різносторонній; б) прямо-, гостро-, тупо-кутний.
    //
    // int hypotenusa,katet1,katet2;
    // printf("\nPlease enter lenght of c: ");
    // scanf("%d", &hypotenusa);
    // printf("\nPlease enter lenght of a: ");
    // scanf("%d", &katet1);
    // printf("\nPlease enter lenght of b: ");
    // scanf("%d", &katet2);
    // if (katet1 == katet2 && katet2 == hypotenusa) {
    //     printf("трикутник рівносторонній");
    // }
    // else if (katet1 == katet2 || katet2 == hypotenusa || hypotenusa == katet1) {
    //     printf("трикутник рівнобедрений");
    // }
    // else if (katet1!= katet2 != hypotenusa) {
    //     printf("трикутник різносторонній");
    // }
    //
    //
    // double katet1vKvadrati = katet1 * katet1, katet2vKvadrati = katet2 * katet2, hypotenusa2vKvadrati = hypotenusa * hypotenusa;
    //
    // if (fabs(katet1vKvadrati + katet2vKvadrati - hypotenusa2vKvadrati) < 1e-6 || fabs(katet1vKvadrati + hypotenusa2vKvadrati - katet2vKvadrati) < 1e-6 || fabs(katet2vKvadrati + hypotenusa2vKvadrati - katet1vKvadrati) < 1e-6) {  // 1e-6 Похибка для порівняння чисел із плаваючою точкою
    //     printf("\nТрикутник є прямокутним.\n");
    // } else if ((katet1vKvadrati + katet2vKvadrati > hypotenusa2vKvadrati) && (katet1vKvadrati + hypotenusa2vKvadrati > katet2vKvadrati) && (katet2vKvadrati + hypotenusa2vKvadrati > katet1vKvadrati)) {
    //     printf("\nТрикутник є гострокутним.\n");
    // } else {
    //     printf("\nТрикутник є тупокутним.\n");
    // }

    //Task4
    //Написати програму, котра дозволяє ввести з консолі тризначне число і вивести його
    //прописом


    //test

    char *hundreds[] = {"", "Сто", "Двісті", "Триста", "Чотириста", "П'ятсот", "Шістсот", "Сімсот", "Вісімсот", "Дев'ятсот"};
    char *tens[] = {"", "", "Двадцять", "Тридцять", "Сорок", "П'ятдесят", "Шістдесят", "Сімдесят", "Вісімдесят", "Дев'яносто"};
    char *teens[] = {"Десять", "Одинадцять", "Дванадцять", "Тринадцять", "Чотирнадцять", "П'ятнадцять", "Шістнадцять", "Сімнадцять", "Вісімнадцять", "Дев'ятнадцять"};
    char *units[] = {"", "Один", "Два", "Три", "Чотири", "П'ять", "Шість", "Сім", "Вісім", "Дев'ять"};

    char userInputNumTask4[3];
    printf("\nPlease enter number: ");
    scanf("%s", userInputNumTask4);
    int lcd = userInputNumTask4[0] - '0';
    int lcd1 = userInputNumTask4[1] - '0';
    int lcd2 = userInputNumTask4[2] - '0';
    printf("\n %s",hundreds[lcd]);
    if (lcd1 == 1) {
        printf(" %s",teens[lcd2]);
    } else {
        printf(" %s",tens[lcd1]);
        printf(" %s",units[lcd2]);
    }

    printf("\n%d%d%d", lcd, lcd1, lcd2);

    return 0;
}
