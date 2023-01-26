#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 * @x: The function that prints a name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *x))
{
	if (name == NULL || f == NULL || x == NULL)
		return;

	f(name);
}
