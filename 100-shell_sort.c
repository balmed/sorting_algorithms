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
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t ap, i, j;

	if (array == NULL || size < 2)
		return;

	for (ap = 1; ap < (size / 3);)
		ap = ap * 3 + 1;

	for (; ap >= 1; ap /= 3)
	{
		for (i = ap; i < size; i++)
		{
			j = i;
			while (j >= ap && array[j - ap] > array[j])
			{
				swap_ints(array + j, array + (j - ap));
				j -= ap;
			}
		}
		print_array(array, size);
	}
}

