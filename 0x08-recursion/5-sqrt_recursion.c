#include "main.h"

/**
 * sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    else if (guess * guess > n)
        return -1;
    else
        return sqrt_helper(n, guess + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else
        return sqrt_helper(n, 0);
}

