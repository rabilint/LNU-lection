#include <array>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROWS 12
#define COLS 12

int* task1() {
    srand(time(NULL)); // Initialization, should only be called once

    static int output[10];
    for (int i = 0; i < 10; i++) {
        int r = rand() % 100; // Random int between 0 and 19
        // printf("|%d",r);
        output[i] = r;
    }

    return output;
}

int* task2(int array[],int num) {
    if (num > 11) {
        return NULL;
    }else {
        int *pointer = &array[num];
        return pointer;
    }
}
int* task3(int array[][COLS],int row,int cols) {
    if (row > 13 || cols > 13) {
        return NULL;
    }else {
        int *pointer = &array[row][cols];
        return pointer;
    }
}

int main() {

    int *task1output, num, pointer, userRow, userCol, secondpointer;
    int array[ROWS][COLS];

    // Заповнюємо масив значеннями для прикладу
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            array[i][j] = i * COLS + j; // Унікальні значення для кожного елемента
        }
    }
    task1output = task1();
    printf("\n array with random elements: \n");
    for (int i = 0; i < 10; i++) {
        printf("|%d",task1output[i]);
    }
    printf("\nвказівник якого елемент вас цікавить?\n");
    scanf(" %d", &num);
    pointer = *task2(task1output,num);
    printf("%p",pointer);

    printf("\nВведіть спочатку рядок, а потім колонку елемента вказівний якого вас цікавить\n");
    scanf("%d", &userRow);
    scanf("%d", &userCol);
    secondpointer = *task3(array,userRow,userCol);
    printf("\n%p : ", secondpointer);
    return 0;

}


