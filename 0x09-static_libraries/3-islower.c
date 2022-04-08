#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase characters
 * @c: first operand
 *
 * Descrption: check if c is a lower case letter
 * Return: 1 if c is lowercase or 0
 *
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
