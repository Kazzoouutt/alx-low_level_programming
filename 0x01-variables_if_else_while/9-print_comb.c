#include<stdio.h>

/* Possible Combination of single digts */

/**
 * main - Print numbers to base ten
 * use space and comma delimiters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;

		if (i <= 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
