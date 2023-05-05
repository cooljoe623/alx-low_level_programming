#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int my_name;
	char *c;

	my_name = 1;
	c = (char *) &my_name;

	return ((int)*c);
}
