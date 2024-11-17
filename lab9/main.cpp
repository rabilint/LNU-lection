#include <string.h>
#include <stdio.h>

int main(void) {
    char inputRow[255];
    scanf("%[^\n]", inputRow);
    char *token = strtok(inputRow, " ");

    while (token != NULL) {
        for(int i=strlen(token) - 1; i>=0;--i)
            printf("%c", token[i]);
        // printf("%s\n", token);
        printf("\n");
        token = strtok(NULL, " ");
    }

    //task 3

    char team[12];

    scanf("%[^\n]", team);

    return 0;
}