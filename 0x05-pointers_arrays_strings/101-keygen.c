#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passrds for the
 *        program
 * Return: random password
 */
int main(void)
{
	int random_number;
	int counter;
	int total;

	srand(time(NULL));
	for (counter = 0, total = 2772; total > 122; counter++)
	{
		random_number = (rand() % 125) + 1;
		printf("%c", random_number);
		total -= random_number;
	}
	printf("%c", total);

	return (0);
}
