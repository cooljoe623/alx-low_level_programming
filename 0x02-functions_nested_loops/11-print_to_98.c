#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @j : number to start from
 * Return:0 or 1
 */

void print_to_98(int j)
{

while (j < 98)
{
	printf("%i, ", j);
	j++;
}
while (j > 98)
{
	printf("%i, ", j);
	j--;
}

printf("98");
putchar('\n');
}
