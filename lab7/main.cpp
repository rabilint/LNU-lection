#include <cmath>
#include <stdio.h>

//завдання 2
bool simplenum(int Num) {
    if (Num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(Num); i++) {
        if (Num % i == 0) {
            return false;
        }
    }
    return true;
}


//завдання 3
int recursiveSum(int journalNum)
{
    if (journalNum > 100) {
        return 0;
    }
    return journalNum + recursiveSum(journalNum + 1);
}

//завдання 4

double optimizationf (double x, int N, int A) {
    return N * x + A;
}


double bisection_method(double a, double b, double tolerance, int N, int A) {
    double c;
    while ((b - a)/2 > tolerance) {
        c = (a + b) / 2;
        if (optimizationf(c, N, A) == 0) {
            break;
        } if( optimizationf(c, N, A ) * optimizationf(a, N, A) < 0 ) {
            b = c;
        } else {
            a =c;
        }
    }
    return c;
}

int main() {
    int Num, N =8, A =17;
    double tolerance = 0.0001;
    double a = -100;
    double b = 100;
    printf("Enter number: ");
    scanf("%d", &Num);

    if (simplenum(Num)) {
        printf("%d is a prime number\n", Num);
    } else {
        printf("%d is not a prime number\n", Num);
    }
    int journalNumber;
    printf("write your journal num");
    scanf("%d", &journalNumber);
    int result = recursiveSum(journalNumber);
    printf("The result is %d", result);

    int i = 0;
    int sum = 0;
    while (i <= 100) {
        if (i != 8 && i != 33) {
            sum = sum + i;
        }
        i++;
    }
    printf("\nсумма 1 - 100 без цифри 8 та 33: %d\n",sum);


    printf("result : %.6f", bisection_method(a,b,tolerance,N,A));

    return 0;
}

