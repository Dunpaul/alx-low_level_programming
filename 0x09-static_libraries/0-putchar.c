#include "main.h"

/**
 * main - entry point
 *
 * Return:0
 *
 */

int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
