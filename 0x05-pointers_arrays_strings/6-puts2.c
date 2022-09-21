#include <stdio.h>
#include "main.h"

/**
 * _puts2 - prints every other character in string
 * @str: pointer ro string
 *
 * Return: nothing
 */

void _puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
