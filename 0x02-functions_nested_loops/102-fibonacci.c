#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci sequence, starting with 1 and 2
 * use comma followed by space as delimiters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
		int a;
		unsigned long x = 0, y = 1, z;

		for (a = 0; a < 50; a++)
		{
			z = x + y;
			printf("%lu", z);

			x = y;
			y = z;

			if (a == 49)
				putchar('\n');

			else
			{
				putchar(',');
				putchar(' ');
			}
		}

		return (0);
}
