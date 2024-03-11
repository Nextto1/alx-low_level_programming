#include "search_algos.h"

/**
 * linear_search - It uses the Linear search algorithm
 * to search for a value in an array of integers
 *
 * @array: input array for the function
 * @size: size of the array for the function
 * @value: value to search
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}

	return (-1);
}
