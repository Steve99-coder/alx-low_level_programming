#include "main.h"

/**
 * _memcpy - coopies memory area from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: max bytes to use
 *
 * Return: Destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
		dest[i] = src[i];

	return (dest);
}
