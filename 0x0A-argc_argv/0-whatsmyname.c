#include <stdio.h>

/**
 * main- prints the name of the function
 * @argc: number of arguments input
 * @argv: string values
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
