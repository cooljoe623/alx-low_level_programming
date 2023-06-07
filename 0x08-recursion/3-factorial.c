#include "main.h"
#include <stdio.h>

/*
 * int factorial(int n): finds the factorial of a given number
 * @s: number
 *
 * return: factorial number(0)
 */
int factorial(int n)
{
	int factor = 1;

	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	factor = factorial(n - 1);
	return (factor * n);
}
