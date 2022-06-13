#include "main.h"

/**
 * _strlen - Count the length of a string
 * @s: String whose value is to be counted
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
