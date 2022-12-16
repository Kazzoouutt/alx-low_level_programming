#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: The character that needs checking
 *
 * Return: 1 if character is uppercase, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
