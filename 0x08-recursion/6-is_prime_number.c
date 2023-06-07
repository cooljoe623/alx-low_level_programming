#include "main.h"
#include <stdio.h>
/*
 * is_prime_number - confirms if n is a prime number or not
 * @n: integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


/*
 * check_prime - check all number < n if they can divide it
 * @n: integer
 * @r: integer
 * Return: integer
 */
int check_prime(int n, int r)
{

	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, r + 1));
}
