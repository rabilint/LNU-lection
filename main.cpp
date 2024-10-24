#include <stdio.h>
#include <math.h>


int main() {
    //task num 2
    //Написати програму, котра ілюструє використання всіх арифметичних і
    // логічних операторів мови Сі, для логічних побітових операцій
    // використовувати представлення чисел в двійковому форматі

    int a = 200, b = 10;
    printf("\n %d", a + b );
    printf("\n %d", a - b );
    printf("\n %d", a * b );
    printf("\n %d", a / b );
    printf("\n %d", a % b );
    a++;
    printf("\n %d", a );
    b--;
    printf("\n %d", b );
    a = true;
    b = true;
    if (a && b) {
        printf("\na and b == true" );
    }
    b = false;
    if (a || b) {
        printf("\na == true, b == false" );
    }
    if (!b) {
        printf("\nb = !true" );
    }
    a = 1;
    b = 1;
    if (a & b) {
        printf("\na == true, b == true" );
    }
    b=0;
    if (a | b) {
        printf("\na == true, b == false" );
    }

    // task num 4
    //Написати програму розв’язку квадратного рівняння, коефіцієнти якого
    //вводяться з клавіатури


    int x=1,y=1,z=1;
    printf("\n Enter 3 numbers: ");
    scanf("%d %d %d", &x,&y,&z);
    int D = pow(y,2) - 4*x*z;
    // printf("\n D = %d", D);
    int output = (-y + sqrt(D))/2*x;
    // printf("\n %d", -y);
    // printf("%d",sqrt(D));
    // printf("\n %d", 2*x);
    printf("\n Output x2= %d", output);
    output = (-y - sqrt(D))/2*x;
    printf("\n Output x2= %d", output);

    return 0;
}
