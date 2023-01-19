#include "main.h"
#include <stdlib>

/**
 * malloc_checked - Allocates memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (mem);
}
