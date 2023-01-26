#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The string to add.
 * @f: a pointer to a function
 *
 * Return: Nothig
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
