#include "main.h"

/**
 * Prints the reverse of a string using recursion.
 *
 * @param s The string to print.
 */
void print_rev_recursion(char *s) {
    if (*s == '\0') {
        return;
    }

    print_rev_recursion(s + 1);
    _putchar(*s);
}
