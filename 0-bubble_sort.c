#include "sort.h"

/**
 * bubble_sort - Sort an array using the bubble sort
 * algorithm
 * @array: Array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swapper = 0, isSwapped;
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		isSwapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapper = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swapper;
				isSwapped = 1;
				print_array(array, size);
			}
		}
		if (isSwapped == 0)
			break;
	}
}

