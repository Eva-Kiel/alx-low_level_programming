#include "main.h"

/**
 * _isalpha - function that checks for alphabet character
 * @c: the int used for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
		return (0);
}
