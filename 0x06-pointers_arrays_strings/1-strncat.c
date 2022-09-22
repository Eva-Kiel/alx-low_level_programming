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
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
