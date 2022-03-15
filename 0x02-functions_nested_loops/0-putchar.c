#include "main.h"
/**
 * main - Entry point
 * prints "_putchar" followed by a new line
 * Return: 0
 */

int main(void)
{
	char p[] = "_putchar";
	int i = 0;

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
