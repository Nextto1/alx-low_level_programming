#include "main.h"

/**
 * binary_to_uint - from the function,
 * it converts a binary number to unsigned int.
 * @b: string containing the binary number in the
 * function.
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int results = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		results = 2 * results + (b[i] - '0');
	}

	return (results);
}
