#include<stdio.h>

/**
 * main - Print all possible different combinations of two digits
 * must be seperated by comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y = 0;

	while (y <= 9)
	{
		x = 0;

		while (x <= 9)
		{
			if (y != x && y < x)
			{
				putchar('0' + y);
				putchar('0' + x);

				if (x + y != 17)
				{
					putchar(44);
					putchar(32);
				}
			}
			x++;
		}
		y++;
	}
	putchar(10);
	return (0);
}
