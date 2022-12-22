#include "main.h"

/**
 * reverse_array - reerses the content of an array of integer
 * @a: the array to reverse
 * @n: number of elements to reverse
 *
 * Return: Reversed array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
