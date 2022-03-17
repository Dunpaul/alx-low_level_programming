#include "main.h"

/**
 * more_numbers - print numbers 1 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0, c;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
