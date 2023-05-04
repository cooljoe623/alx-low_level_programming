#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: The number to modify.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) /* check if index is valid */
        return (-1);

    *n &= ~(1 << index); /* clear the bit at the given index */

    return (1);
}
