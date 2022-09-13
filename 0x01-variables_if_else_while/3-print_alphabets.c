#include <stdio.h>

/**
 * main - Prints alphabets in lower and upper case
 *
 * Description: use main function
 * Return: Successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}

