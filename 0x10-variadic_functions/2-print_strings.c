#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string between strings
 * @n: number of strings passed
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *c;
va_start(list, n);

for (i = 0; i < n; i++)
{
	c = va_arg(list, char*);
	if (c != NULL)
		printf("%s", c);
	else
		printf("(nil)");

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
