#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i:  is the int that will use for the argument of the function
 * Return: integer value
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
