#include "main.h"
#include <stdio.h>
char* rot13(char* s) {
    char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int x;

    for (int i = 0; s[i]!= '\0'; i++) {
        if (isalpha(s[i])) {
            for (int j = 0; input[j]!= '\0'; j++) {
                if (tolower(input[j]) == tolower(s[i])) {
                    x = j;
                }
            }
            printf("%c", out[x]);
        }
        else {
            printf("%c", s[i]);
        }
    }
    return s;
}
