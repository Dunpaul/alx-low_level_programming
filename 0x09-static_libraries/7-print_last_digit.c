#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: number assessed
 * Return: value of the last digit
 */

int print_last_digit(int c)
{
	int ls;

	if (c < 0)
		ls = -1 * (c % 10);
	else
		ls = c % 10;

	_putchar('0' + ls);
	return (ls);
}
