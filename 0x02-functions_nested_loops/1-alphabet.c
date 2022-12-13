#include "main.h"

/**
 * print_alphabet - Writes a function that prints the alphabet in lowercase
 * 		    followed by a newline
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
