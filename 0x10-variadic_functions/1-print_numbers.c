#include <stdbool.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/*
 * print_num - prints all numbers with a separator
 * where separator = string - print between numbers
 * if separator = null - dont print it
 * shd print a new line at the end of function
 */

void print_numbers(const char *separator, const unsigned int n, ...){
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++){
		printf("%i", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

	putchar('\n');
}
