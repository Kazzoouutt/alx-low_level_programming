#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string that will be modified
 * @src: string to concatenate
 * @n: copy up to position 'n'
 *
 * Return: A pointer @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (index_02 < n && src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;
	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
