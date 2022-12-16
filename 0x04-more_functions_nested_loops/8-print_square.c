#include "main.h"

/**
 * print_square - prints a square using a given character size
 * @size: The size of the square.
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
