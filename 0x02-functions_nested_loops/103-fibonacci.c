#include <stdio.h>

/**
 * main - Prints the sum of even fibonacci sequence
 * use comma followed by space as delimiters
 * the sums should not exceed 4000000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long x = 0, y = 1, z;
	float i;

	while (1)
	{
		z = x + y;
		if (z > 4000000)
			break;

		if ((z % 2) == 0)
			i += z;

		x = y;
		y = z;
	}

	printf("%.0f\n", i);
	return (0);
}
