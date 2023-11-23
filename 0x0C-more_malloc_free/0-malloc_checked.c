#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - Allocates memeory using malloc
 * @b: Input integer
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
