#include "main.h"

/**
 * print_alphabet - print_alphabet function
 * prints the letters of the alphabet
 * retutn:0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
