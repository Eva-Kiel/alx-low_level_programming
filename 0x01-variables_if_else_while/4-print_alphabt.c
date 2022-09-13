#include <stdio.h>

/**
 * main - Print alphabets in lowercase, new line
 *
 * Description: use main function
 * Return: Successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
