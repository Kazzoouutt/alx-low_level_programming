#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (8s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}