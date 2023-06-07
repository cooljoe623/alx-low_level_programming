#include "main.h"
#include <stdio.h>
/*
 *_pow_recursion(int x, int y): finds the value of x raised y
 *
 * @x: value of x (x^2)
 * @y: the power (1^y)
 * return: answer of x^y (0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
