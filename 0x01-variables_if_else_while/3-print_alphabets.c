#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch_low[] = "abcdefghijklmnopqrstuvwxyz";
	char ch_up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for ( int i = 0; i < 26; i++)
	{
		putchar(ch_low[i]);
	}
	for ( int i = 0; i < 26; i++)
	{
		putchar(ch_up[i]);
	}
	putchar("\n");
	return 0;
}
