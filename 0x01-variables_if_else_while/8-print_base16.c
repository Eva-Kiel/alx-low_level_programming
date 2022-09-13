#include <stdio.h>

/**
 * main - Print a hexadecimal  string
 *
 * Return: Always successful
 */
int main(void)
{
	char ch; 

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
