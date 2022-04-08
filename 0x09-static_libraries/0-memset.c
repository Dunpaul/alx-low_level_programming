#include "main.h"

/**
 * _memset - used to fill a memory block
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
