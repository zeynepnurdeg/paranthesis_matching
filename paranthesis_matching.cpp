#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define SIZE 20

int minAddToMakeValid(char* s) {
    int i, open_close = 0, lenght = strlen(s), no_match = 0;

    for (i = 0; i < lenght; i++) {
        if (s[i] == '(') {
            open_close++;
        }
        else {
            if (open_close > 0)
                open_close--;
            else {
                no_match++;
            }
        }
    }

    return open_close + no_match;
}

int main(void)
{
    char s[SIZE];

    strcpy(s, "(()))))()()(()()))");
    printf("%d", minAddToMakeValid(s));

    return 0;
}