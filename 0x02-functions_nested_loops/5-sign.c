#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number being checked
 * Return: 1,0 or -1
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (n);
	}
	return (0);
}
