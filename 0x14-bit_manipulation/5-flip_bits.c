#include "main.h"

/**
 * flip_bits - In the function it counts the
 * number of bits to change from one another
 * @n: first number to count
 * @m: second number to count
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count_down = 0;
	unsigned long int recent;
	unsigned long int exception = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		recent = exception >> i;
		if (recent & 1)
			count_down++;
	}

	return (count_down);
}
