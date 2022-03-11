#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * prints digits
 *
 * Return: o
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
