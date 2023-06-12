#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/*
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to fill array
 *
 * return (0)the array filled
 */

char *create_array(unsigned ini size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
