#include <stdio.h>
#include <stdlib.h>


int* toPoint(int x, int y) {
    int* point = (int*)malloc(2 * sizeof(int));
    point[0] = x;
    point[1] = y;
    return point;
}

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    int* myPoint = toPoint(5, 10);
    printf("Координати точки: x = %d, y = %d\n", myPoint[0], myPoint[1]);
    printf("Вказівник на точку: %p\n", (void*)myPoint);
    free(myPoint);

    double (*operations[4])(double, double) = {add, subtract, multiply, divide};

    char input[100];
    printf("Введіть вираз (наприклад, 1.28+3.14): ");
    scanf("%s", input);
    double num1, num2;
    char op;
    sscanf(input, "%lf%c%lf", &num1, &op, &num2); //num1-2 - операнд op - оператор
    double result;
    switch (op) {
        case '+': result = operations[0](num1, num2); break;
        case '-': result = operations[1](num1, num2); break;
        case '*': result = operations[2](num1, num2); break;
        case '/': result = operations[3](num1, num2); break;
        default:
            printf("Неправильний оператор!\n");
        return 1;
    }
    printf("Результат: %.2lf\n", result);

    char inputSTR[100];
    printf("Введіть стрічку: ");
    scanf("%s", inputSTR);

    int length = stringLength(inputSTR);
    printf("Довжина стрічки: %d\n", length);
    return 0;
}
