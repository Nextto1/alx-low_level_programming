#include "main.h"

/**
 * get_endianness - from the function,it checks if a
 * machine is big or small endian
 * Return: 0 for big endian, 1 for small endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char *) &i;

	return (*b);
}
