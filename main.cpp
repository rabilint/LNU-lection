#include <stdio.h>
#include <math.h>


int main() {
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
        printf("a and b == true" );
    }
    b = false;
    if (a || b) {
        printf("a == true, b == false" );
    }
    if (!b) {
        printf("b = !true" );
    }
    a = 1;
    b = 1;
    if (a && b) {
        printf("a == true, b == false" );
    }
    return 0;
}
