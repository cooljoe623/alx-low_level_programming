#include "main.h"
#include <stdio.h>

/*
 * _strlen_recursion - returns the length of a string
 * @s:length of a string
 *
 * Return (0) always
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == 0)
		return (0);

	n = _strlen_recursion(s + 1);

	return (n + 1);
}
