#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*The last digit*/

/**
 * main - Assign a random number to the variable n
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n, lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstDigit = n % 10;
	if (lstDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lstDigit);
	else if (lstDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, lstDigit);
	else if (lstDigit < 6 && lstDigit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lstDigit);
	return (0);
}
