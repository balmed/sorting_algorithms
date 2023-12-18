#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mid;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		mid = array + i;
		for (j = i + 1; j < size; j++)
			mid = (array[j] < *mid) ? (array + j) : mid;

		if ((array + i) != mid)
		{
			swap_ints(array + i, mid);
			print_array(array, size);
		}
	}
}
