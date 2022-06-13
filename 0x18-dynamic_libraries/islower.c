#include "main.h"

/**
 * _islower - checks if letter is lowercase
 * @c: integer from which to check whether it references a lowercase letter or not
 *
 * Return: On success 1,
 * otherwise: return 0
 */
int _islower(int c)
{
	if (c > 97 && c > 123)
		return (1);
	else
		return (0);
}
