#include "sort.h"

/**
 * bubble_sort - sort array of ints in ascending order
 * @array: array to sort
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j, temp, swapped;

	do {
		swapped = 0; /* indicates no swap */
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = 1; /* indicates swap */
			}
		}
		i++;
	} while (swapped == 1); /* loop runs as long swap is made */
}
