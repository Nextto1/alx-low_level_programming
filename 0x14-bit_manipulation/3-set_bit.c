#include "main.h"

/**
 * set_bit - from the function it sets
 * a bit at a given index to 1
 * @n: is a pointer to the number to change
 * @index: is an index of the bit to set to 1
 *
 * Return: 1 for success and -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
