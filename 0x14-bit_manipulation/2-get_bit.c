#include "main.h"

/**
 * get_bit - it returns the value of the bit
 * at an index in a decimal number.
 * @n: number to search for.
 * @index:The index of the bit.
 * Return:The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
