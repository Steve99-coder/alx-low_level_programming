#include "main.h"

/**
 * _isupper - Check if parameter c represents an uppercase letter.
 * @c: integer representing a character
 *
 * Return: 1 if true,
 * otherwise: 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
