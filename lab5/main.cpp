

#include <cmath>
#include <cstdio>

int main() {

    // Task 2
    // Написати програму, котра видаватиме результат порівняння двох введених з клавіатури
    // чисел з допомогою оператора «?».

    int userInputNum1, userInputNum2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &userInputNum1, &userInputNum2);
    userInputNum1 > userInputNum2 ? printf("Перше число більше другого") : (userInputNum1 < userInputNum2 ? printf("Друге число більше першого") : printf("Числа рівні"));


    //Task 3
    //     Написати програму, котра дозволяє ввести з консолі довжини трьох сторін трикутника
    // (наприклад, 3 4 5) і визначити його тип: а) рівносторонній (правильний),
    // рівнобедренний, різносторонній; б) прямо-, гостро-, тупо-кутний.

    int c,a,b;
    printf("\nPlease enter lenght of c: ");
    scanf("%d", &c);
    printf("\nPlease enter lenght of a: ");
    scanf("%d", &a);
    printf("\nPlease enter lenght of b: ");
    scanf("%d", &b);
    if (a == b && b == c) {
        printf("трикутник рівносторонній");
    }
    else if (a == b || b == c || c == a) {
        printf("трикутник рівнобедрений");
    }
    else if (a!= b != c) {
        printf("трикутник різносторонній");
    }


    double a2 = a * a, b2 = b * b, c2 = c * c;

    if (fabs(a2 + b2 - c2) < 1e-6 || fabs(a2 + c2 - b2) < 1e-6 || fabs(b2 + c2 - a2) < 1e-6) {  // 1e-6 Похибка для порівняння чисел із плаваючою точкою
        printf("\nТрикутник є прямокутним.\n");
    } else if ((a2 + b2 > c2) && (a2 + c2 > b2) && (b2 + c2 > a2)) {
        printf("\nТрикутник є гострокутним.\n");
    } else {
        printf("\nТрикутник є тупокутним.\n");
    }

    return 0;
}
