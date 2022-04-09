#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _strlen - returns the length of a string
 * @s: char to check
 * Return: length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}

/**
 * multiplier - multiply the strings and check ifdigits
 * @s1: 1st string to multiply
 * @s2: 2nd string to multiply
 * Return: result
 */

char *multiplier(char *s1, char *s2) /* Courtesy of Arthur Damm */
{
	char *result;
	int x, y, z, l1, l2, length;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	result = malloc(_strlen(s1) + _strlen(s2));
	if (result == 0)
		printf("Error\n"), exit(98);
	while (length--)
		result[length] = 0;
	for (l1--; l1 >= 0; l1--)
	{
		if (!isdigit(s1[l1]))
		{
			free(result);
			printf("Error\n"), exit(98);
		}
		x = s1[l1] - '0';
		z = 0;
		for (l2--; l2 >= 0; l2--)
		{
			if (!isdigit(s2[l2]))
			{
				free(result);
				printf("Error\n"), exit(98);
			}
			y = s2[l2] - '0';
			z += result[l1 + l2 + 1] + (x * y);
			result[l1 + l2 + 1] = z % 10;
			z /= 10;
		}
		if (z)
			result[l1 + l2 + 1] += z;
	}
	return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: first number
 * @argv: second number
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, x, length = 0;
	char *result;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}

	length = _strlen(argv[1]) + _strlen(argv[2]);
	result = multiplier(argv[1], argv[2]);
	x = 0;
	for (i = 0; i < length; i++)
	{
		if (result[i])
			x = 1;
		if (x)
			_putchar(result[i] + '0');
	}
	if (x == 0)

