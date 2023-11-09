#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: The number of items
 *
 * Return: Returns the sum of all its parameters.
 *         If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int sm = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++)
    {
        sm += va_arg(args, int);
    }
    va_end(args);
    return sm;
}
