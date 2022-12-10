#include<stdio.h>

/**
 * main - Print all possible different combinations of three digits
 * must be seperated by comma and space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	while (z <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			x = 0;
			while (x <= 9)
			{
				if (z != y && y != x && z < y && y < x)
				{
					putchar('0' + z);
					putchar('0' + y);
					putchar('0' + x);

					if (x + y + z != 24)
					{
						putchar(44);
						putchar(32);
					}
				}
				x++;
			}
			y++;
		}
		z++;
	}
	putchar(10);
	return (0);
}
