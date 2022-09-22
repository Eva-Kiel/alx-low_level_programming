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
	strncat(dest, src, n);

	return (dest);
}
