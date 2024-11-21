#include <stdio.h>
#include <string.h>


void copyFile(const char *sourcePath, const char *destPath) {
    FILE *sourceFile = fopen(sourcePath, "rb");
    FILE *destFile = fopen(destPath, "wb");
    char buffer[1024];
    size_t bytesRead;
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("copying done!");
}

int main() {
    FILE *file;
    file = fopen("mfile.txt", "w");
    int n;
    printf("Кількість сторінок (10+) ");
    scanf("%d", &n);
    if (n < 10) {
        printf("Необхідно ввести 10+ стрічок!\n");
        fclose(file);
        return 1;
    }
    getchar();
    for (int i = 0; i < n; i++) {
        char line[256];
        printf("str %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fputs(line, file);
    }
    fclose(file);
    file = fopen("mfile.txt", "r");
    char strings[100][256];
    int lineCount = 0;
    int totalChars = 0;
    while (fgets(strings[lineCount], sizeof(strings[lineCount]), file)) {
        strings[lineCount][strcspn(strings[lineCount], "\n")] = '\0';
        totalChars += strlen(strings[lineCount]);
        lineCount++;
    }
    fclose(file);
    printf("Вміст файлу 'mfile.txt':\n");
    for (int i = 0; i < lineCount; i++) {
        printf("%s\n", strings[i]);
    }
    printf("Кількість стрічок: %d\n", lineCount);
    printf("Середня кількість символів: %.2f\n", (double)totalChars / lineCount);
    file = fopen("xfile.txt", "w");
    for (int i = lineCount - 1; i >= 0; i--) {
        for (int j = strlen(strings[i]) - 1; j >= 0; j--) {
            fputc(strings[i][j], file);
        }
        fputc('\n', file);
    }
    fclose(file);
    printf("Файл 'xfile.txt' записано у зворотному порядку.\n");

    char sourcePath[256] = "Untitled60.png", destPath[256] = "copy-Untitled60.png";
    copyFile(sourcePath, destPath);

    return 0;
}
