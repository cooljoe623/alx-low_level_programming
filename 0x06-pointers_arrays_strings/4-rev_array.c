#include "main.h"

/**
 * reverse_array - reversing function.
 * @a: pointer
 * @n: pointer
 * Return: No return
 */

void reverse_array(int *a, int n)
{
	int *p, i, j, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *p;
		*p = j;
		p--;
	}
}
