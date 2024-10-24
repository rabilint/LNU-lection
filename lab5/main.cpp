

#include <cmath>
#include <cstdio>

int main() {

    // Task 2
    // Написати програму, котра видаватиме результат порівняння двох введених з клавіатури
    // чисел з допомогою оператора «?».

    int userInputNum1, userInputNum2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInputNum1, &userInputNum2);
    userInputNum1>userInputNum2 ? printf("Перше число більше другого"): printf("Друге число більше першого");

    //Task 3
    //     Написати програму, котра дозволяє ввести з консолі довжини трьох сторін трикутника
    // (наприклад, 3 4 5) і визначити його тип: а) рівносторонній (правильний),
    // рівнобедренний, різносторонній; б) прямо-, гостро-, тупо-кутний.

    int hipotenuse,katet1,katet2;
    printf("\nPlease enter lenght of hipotenuse: ");
    scanf("%d", &hipotenuse);
    printf("\nPlease enter lenght of katet1: ");
    scanf("%d", &katet1);
    printf("\nPlease enter lenght of katet2: ");
    scanf("%d", &katet2);
    if (katet1 = katet2 = hipotenuse) {
        printf("трикутник рівносторонній");
    }
    else if (katet1 = katet2 != hipotenuse) {
        printf("трикутник рівнобедрений");
    }
    else if (katet1!= katet2 != hipotenuse) {
        printf("трикутник різносторонній");
    }
    int cosA = -(std::pow(katet1, 2) - pow(katet2, 2) + pow(hipotenuse, 2) - 2 * katet2 * hipotenuse);
    int cosB = -(std::pow(katet2, 2) - pow(katet1, 2) + pow(hipotenuse, 2) - 2 * katet1 * hipotenuse);
    int cosC = -(std::pow(hipotenuse, 2) - pow(katet1, 2) + pow(katet2, 2) - 2 * katet1 * katet1);
    printf("\n%d", cosA);
    printf("\n%d", cosB);
    printf("\n%d", cosC);

    return 0;
}
