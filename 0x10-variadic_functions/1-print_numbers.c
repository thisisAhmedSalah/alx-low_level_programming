#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Function that prints numbers,
 *                 followed by a new line.
 *
 * @separator: This is input separator
 * @n: This is the input number
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list num;
    va_start(num, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", va_arg(num, int));
        if (separator != NULL && i != (n - 1))
            printf("%s", separator);
    }
    va_end(num);
}
