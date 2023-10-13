#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        if (i == 2 || i == 4)
            continue;
        _putchar(i);
    }
    _putchar('\n');
}
