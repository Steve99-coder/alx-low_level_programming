#include "main.h"

/**
 * _isalpha - checks if letter provided is infact a letter
 * @c: integer from which to check whether references a letter or not
 *
 * Return: Void.
 */
int _isalpha(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
