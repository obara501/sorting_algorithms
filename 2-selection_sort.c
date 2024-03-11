#include "sort.h"

/**
 * selection_sort - Sorts an array of integers using
 * the selection sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 *
 * Description: The `hunter` variable in the inner loop
 * `hunts` for the smallest number compared to `index`
 * and swaps the integers accordingly
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int swapper = 0;
	size_t i, hunter, index = 0;

	if (array == NULL || size <= 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (hunter = i + 1; hunter < size; hunter++)
		{
			if (array[hunter] < array[index])
				index = hunter;
		}
		if (index != i)
		{
			swapper = array[index];
			array[index] = array[i];
			array[i] = swapper;
			print_array(array, size);
		}
		else
			break;
	}
}

