#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **malloc_checked - allocates memory
 *
 *@b: it collects the main input info
 *
 *Return: It returns the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = (void *) malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
