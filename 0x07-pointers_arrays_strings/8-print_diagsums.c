#include "main.h"

/**
 * print_diagsums - Print the sum of the 2 diagonals
 * of a square matrix of integers.
 * @a: 2s array of integer types
 * @size: Size of array (Square)
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sizer;

	i = 0;
	sum = 0;
	sizer = size * size;
	while (i < sizer)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < sizer)
	{
		if (i % (size - 1) == 0 && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
