#include "main.h"

/**
 * _islower - function that checks lowercase character
 * @c: single letter input
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
		return (0);
}
