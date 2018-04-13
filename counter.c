#include <stdio.h>
#include <ctype.h>

int main(void) {
    int digits = 0;
    int alpha_chars = 0;
    char c;

    while((c = getc(stdin)) != EOF) {
        if (isdigit(c)) {
            digits++;
        }
        else if (isalpha(c)) {
            alpha_chars++;
        }
    }

    printf("Digits: %d\nAlpha characters: %d\n", digits, alpha_chars);
}