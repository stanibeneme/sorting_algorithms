#include "sort.h"

/**
 * swap_ints - Swap the two integers in an array.
 * @a: The first integer to be swap.
 * @b: The second integer to be swap.
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
 * bubble_sort - Sort the array of integers in ascending order.
 * @array: The array of integers to sort.
 * @size: Size of the array.
 * Project by Stanley Ibeneme
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
