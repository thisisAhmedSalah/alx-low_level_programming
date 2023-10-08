/* betty style doc for function main goes there */
#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	for ( int i = 0; i < 26; i++)
	{
		putchar(ch[i]);
	}
	putchar("\n");
	return 0;
}
