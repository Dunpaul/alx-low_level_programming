#include <stdio.h>

/**
 * main - checks for sizes
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;

	printf("Size of a char: %lu.\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n",(unsigned long)sizeof(li));
	printf("Size of a long long int: %lu.\n",(unsigned long)sizeof(lli));
	return (0);
}
