#include "main.h"

/**
 * print_line - print lines
 * @n: size of line
 * Return 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
