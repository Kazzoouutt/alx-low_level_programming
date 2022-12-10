#include<stdio.h>

/* Hexadecimal Characters */

/**
 * main - Print numbers to base sixteen
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	while (j <= 102)
	{
		putchar(j);
		j++;
	}

	putchar(10);
	return (0);

}
