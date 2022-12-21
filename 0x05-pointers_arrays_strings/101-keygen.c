#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, aa, ab;

	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';
	if (sum != 2772)
	{
		aa = (sum - 2772) / 2;
		ab = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			aa++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + aa))
			{
				password[index] -= aa;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + ab))
			{
				password[index] -= ab;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
