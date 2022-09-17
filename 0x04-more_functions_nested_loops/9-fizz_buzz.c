#include <stdio.h>

/**
 * main - function that prints Fizz or buzz
 *
 * Return: returns 0
 */

int main(void)
{
	int h =1;

	while (h <= 100)
	{
		if ((h % 3 == 0) && (h % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((h % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((h % 5) == 0)
		{
			if (h != 100)
			{
				printf("Buzz ");
				printf('\n');
			}
			else
			{
				printf("Buzz ");
			}
			else if (h % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%D ", h);
			}
		}
	}
	printf('\n');

	return (0);
}


