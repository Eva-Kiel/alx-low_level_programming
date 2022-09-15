#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - funtion to print abc
 *
 * Return: always successful
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
