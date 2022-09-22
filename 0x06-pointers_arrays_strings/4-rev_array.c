#include "main.h"

/**
 * reverse_array - reverse array of integer
 * @a: array
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n: i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
