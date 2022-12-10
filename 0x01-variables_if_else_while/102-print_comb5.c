#include <stdio.h>

/**
 * main - Combination of all possible two tow digit number
 * the two numbers are seperated by a space
 * use a comma and space as delimeter after every combintion
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x != y && x < y)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');

				putchar(32);

				putchar(y / 10 + '0');
				putchar(y % 10 + '0');

				if (x == 98 && y == 99)
					break;

				putchar(44);
				putchar(32);
			}
		}
	}	

	putchar(10);
	return (0);

}
