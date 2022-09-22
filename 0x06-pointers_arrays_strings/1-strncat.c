#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: source value
 * @n: parameter
 *
 * Return: returns pointer to @dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = o, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
