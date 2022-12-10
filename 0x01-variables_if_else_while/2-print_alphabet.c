#include<stdio.h>

/* The Alphabet Game */

/**
 * main - Prints alphabets in lowercase followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
