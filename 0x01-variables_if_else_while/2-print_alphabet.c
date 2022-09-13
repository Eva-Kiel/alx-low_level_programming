#include <stdio.h>

/**
 * main - Print alphabet in lowercase then new line
 *
 * Description: Use main function
 * Return : Succesful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
