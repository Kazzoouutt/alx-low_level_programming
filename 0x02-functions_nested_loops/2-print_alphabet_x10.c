#include "main.h"

/**
 * print_alphabet_x10 - Prints ten times the alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a;

	while (i++ < 10)
	{
		for (a = 'a', a <= 'z', a++)
		{
			_putchar(a);
		}

		_puchar('\n');
	}
}
