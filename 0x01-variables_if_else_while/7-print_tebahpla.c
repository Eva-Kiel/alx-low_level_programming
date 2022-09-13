#include <stdio.h>

/**
 * main - Print alphabet in reverse
 *
 * Return: Always successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
