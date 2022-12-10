#include<stdio.h>

/* The Alphabet Game */

/**
 * main - Prints letters in lowercase then uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97, j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}

	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
