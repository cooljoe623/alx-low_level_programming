#include "main.h"

/**
  *  _puts_recursion - Print a string in reverse
  * @s: the string to reverse
  *
  * Return: Nothing.
  */


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
