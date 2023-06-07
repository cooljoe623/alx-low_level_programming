#include <stdio.h>
#include "main.h"
/*
 * int _sqrt_recursion(int n): computes the natural square root of a number
 * @n: the number 
 *
 * return: square root of the number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root.
  * @n: number to calculate the square root
  * @e: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int e)
{
	int sqrt = e * e;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (e);

	return (_sqrt(n, e + 1));
}
