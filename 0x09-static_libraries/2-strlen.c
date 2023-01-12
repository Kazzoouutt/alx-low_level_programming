#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The analyzed string
 *
 * Return: The length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
