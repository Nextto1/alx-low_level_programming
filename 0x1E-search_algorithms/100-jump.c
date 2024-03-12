#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array and a pointer 
 * @size: size of the array
 * @value: value to search
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (k = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		k = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; k < jump && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
