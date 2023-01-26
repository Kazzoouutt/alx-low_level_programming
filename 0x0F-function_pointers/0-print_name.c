#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: The printed name.
 * @f: a pointer to a function to a pointer that
 * prints a name.
 *
 * Return: Nothig
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
