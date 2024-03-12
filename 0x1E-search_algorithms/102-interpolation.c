#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array and a pointer
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		k = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (k < size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", k);
			break;
		}

		if (array[k] == value)
			return (k);
		if (array[k] > value)
			r = k - 1;
		else
			l = k + 1;
	}

	return (-1);
}
