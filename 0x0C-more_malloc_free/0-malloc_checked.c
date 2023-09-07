#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - a prog. that cause normal process termination
 *with a status value of 98
 *@b: memory's allocation
 *Return: test
 */
void *malloc_checked(unsigned int b)
{
	void *test;

	test = malloc(b);
	if (test == NULL)
		exit(98);
	return (test);
}
