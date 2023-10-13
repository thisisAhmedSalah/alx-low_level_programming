#include "main.h"
/**
 * print_line - Prints a line of n underscores to the standard output.
 *
 * Parameters:
 * n - The number of underscores to print.
 *
 * Returns:
 * None
 *
 * Side effects:
 * Prints a line of n underscores to the standard output.
 */
void print_line(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        int i;
        for (i = 1; i < n; i++) {
            _putchar('_'); 
        }
        _putchar('\n');   
    }
}
