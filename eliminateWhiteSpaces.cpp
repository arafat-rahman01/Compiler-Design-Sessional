#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("lex.cpp", "r");

    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }

    printf("Source program without whitespace:\n\n");

    while((ch = fgetc(fp)) != EOF) {
        if (!isspace(ch))
            putchar(ch);
    }

    rewind(fp);

    printf("\n\nNumbers found in the source program:\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (isdigit(ch)) {
            while (isdigit(ch)) {
                putchar(ch);
                ch = fgetc(fp);
            }
            printf("\n");
        }
    }

    fclose(fp);
    return 0;
}