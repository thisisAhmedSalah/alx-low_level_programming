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
        _putchar('\n');  // Print newline if n is 0 or less
    } else {
        int i;
        for (i = 0; i < n; i++) {
            _putchar('_');  // Print the character '_'
        }
        _putchar('\n');    // Print newline after the line
    }
}
