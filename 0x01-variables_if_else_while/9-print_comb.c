#include <stdio.h>

/**
 * main - Print sinle digit combination possible
 *
 * Return: Always successful
 */
int main(void)
{
	int c;

	for (c = '0'; c<= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar('');
		}
	}
	putchar ('\n');
	return (0);
}
