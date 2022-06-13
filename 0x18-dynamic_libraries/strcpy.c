#include "main.h"

/**
 * _strcpy - copies string pointed to by src
 * @dest: character pointer to destination
 * @src: pointer to source character.
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = src[i];
	return (dest);
}
