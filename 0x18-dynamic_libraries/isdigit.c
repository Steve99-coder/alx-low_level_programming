#include "main.h"

/**
 * _isdigit - check if parameter c represents a digit
 * @c: integer representing an ascii character
 *
 * Return: 1 if isdigit, otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
