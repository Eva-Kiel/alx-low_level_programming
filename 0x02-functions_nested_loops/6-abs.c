#include "main.h"
#include <stdio.h>
/**
 * _abs - function computing the absolutr value of an integer
 * @c: the int used for the argument of the function
 * Return: o
 */
int _abs(int c)
{
	if (c >0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
