#include "main.h"

/**
 * _strcpy - function copies the string pointed
 * @dest: pointer to copy the string to
 * @src: the string to copy to the destination
 *
 * Return: a copy of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
