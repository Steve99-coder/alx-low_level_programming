#include "main.h"

/**
 *_strncpy - a function to copy strings.
 *@dest: a string value
 *@src: a string value
 *@n: an integer
 *Return: returns a charcter type
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
