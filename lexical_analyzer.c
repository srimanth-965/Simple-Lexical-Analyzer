#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char code[100], word[50];
    int i = 0, j;

    printf("Enter code: ");
    fgets(code, 100, stdin);
    while (code[i]) {
        if (isalpha(code[i])) {
            j = 0;
            while (isalnum(code[i])) word[j++] = code[i++];
            word[j] = 0;
            if (!strcmp(word, "int") || !strcmp(word, "float") ||
                !strcmp(word, "if") || !strcmp(word, "else") ||
                !strcmp(word, "while") || !strcmp(word, "return"))
                printf("%s -> Keyword\n", word);
            else
                printf("%s -> Identifier\n", word);
        }
        else if (isdigit(code[i])) {
            printf("%c -> Number\n", code[i++]);
        }
        else if (strchr("+-*/=<>", code[i]))
            printf("%c -> Operator\n", code[i++]);
        else if (strchr(";,(){}", code[i]))
            printf("%c -> Separator\n", code[i++]);
        else
            i++;
    }
    return 0;
}
