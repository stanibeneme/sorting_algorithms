#include "sort.h"

/**
 * swap_ints - It swap two integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 * Project by Stanley Ibeneme
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort the array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 * project by Stanley Ibeneme
 * Description: Uses Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
