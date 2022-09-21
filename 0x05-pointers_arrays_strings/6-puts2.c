#include <stdio.h>
#include "main.h"

/**
 * _puts2 - pints every other character
 * @str: string
 *
 * Return: nothing
 */

void _puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
