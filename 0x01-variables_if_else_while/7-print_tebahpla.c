#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * prints the alphabet
 *
 * Return: o
 *
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
