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
void print_line(int n)
{
    for (int i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
