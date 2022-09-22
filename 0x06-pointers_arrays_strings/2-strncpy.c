#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source value
 * @n: parameter
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	int 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
