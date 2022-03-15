#include "main.h"

/**
 * print_alphabet_x10 - print_alphabet function
 * prints the letters of the alphabet
 * retutn:0
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		n++;
	}
}
