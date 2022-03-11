#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * prints hexadecimals
 *
 * Return: o
 *
 */

int main(void)
{
	int d;
	int c;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
