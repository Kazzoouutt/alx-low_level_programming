#include <stdio.h>

/**
 * main - Finds and Prints the first 98 fibonacci sequence
 * use comma followed by space as delimiters
 * start from 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long x = 0, y = 1, z;
	unsigned long xa, xb, ya, yb;
	unsigned long a, b;

	for (i = 0; i < 92; i++)
	{
		z = x + y;
		printf("%lu, ", z);
		x = y;
		y = z;
	}
	xa = x / 10000000000;
	ya = y / 10000000000;
	xb = x % 10000000000;
	yb = y % 10000000000;

	for (i = 93; i < 99; i++)
	{
		a = xa + ya;
		b = xb + yb;
		if (xb + yb > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (i != 98)
		{
			putchar(',');
			putchar(' ');
		}
		xa = ya;
		xb = yb;
		ya = a;
		yb = b;
	}
	putchar(10);
	return (0);
}
