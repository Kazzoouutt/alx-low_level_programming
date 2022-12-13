#include "main.h"

/**
 * print_alphabet - Writes a function that prints the alphabet in lowercase
 * 		    followed by a newline
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;
	
	for (ch = "a"; ch <= "z"; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
