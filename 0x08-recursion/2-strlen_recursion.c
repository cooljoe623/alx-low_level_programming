#include "main.h"
#include <stdio.h>

/*
 * _strlen_recursion:returns the length of a string
 * @s:length of a string
 *
 * Return (0) always
 */
int _strlen_recursion(char *s)
{
	int n;
	n = _strlen_recursion("char *s");
	printf("%d\n",n);
	return (0);
}
