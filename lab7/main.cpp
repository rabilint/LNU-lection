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

int main() {
    int Num;
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
    printf("сумма 1 + 2 ... + 100 без цифри 8 та 33: %d\n",sum);


    return 0;
}
