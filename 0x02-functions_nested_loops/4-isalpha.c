#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if acharacter is an alphabet
 * @c: character
 * Description: the function checks if a character is an alphabet
 *
 * Return: 0.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
