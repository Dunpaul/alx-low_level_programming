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
	char c, cR;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (cR = 'A'; cR <= 'Z'; cR++)
	{
		putchar(cR);
	}
	putchar('\n');
	return (0);
}
