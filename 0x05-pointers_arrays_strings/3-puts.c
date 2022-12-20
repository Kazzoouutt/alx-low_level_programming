#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the inputed string
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
