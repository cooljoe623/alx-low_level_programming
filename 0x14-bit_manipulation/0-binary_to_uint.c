#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string containing a binary number
 *
 * Return: the converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b; ++b) {
		if (*b != '0' && *b != '1')
			return (0);
		result <<= 1;
		if (*b == '1')
			result += 1;
	}

	return (result);
}
