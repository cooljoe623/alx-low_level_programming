#include "main.h"
#include <stdio.h>
/*
 * _print_rev_recursion - prints a string in reverse
 * _print_rev_recursion - prints a string in reverse
 * @s: the string in reverse
 *
 * Return - always 0 (success)
 */
void _print_rev_recursion(char *s){
	if (*s == '\0')
	{
		return;
	}
	s + 1;
	_print_rev_recursion(s);
	s - 1;
	_putchar(*s);
}
