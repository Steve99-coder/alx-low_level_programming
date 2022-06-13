#include "main.h"

/**
 * _strncat - concatenate n bytes of two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 *
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + 1] = src[i];

	/* should end with a end of string char */
	dest[dest_len + i] = '\0';

	return (dest);
}
