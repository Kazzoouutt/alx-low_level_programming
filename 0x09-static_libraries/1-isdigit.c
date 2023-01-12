#include "main.h"

/**
 * _isdigit - checks for a digit ranging from zero to nine
 * @c: The digit to be checked
 *
 * Return: 1 if the checked number is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
