#include "sort.h"

/**
 * bubble_sort - A function for bubble sorting.
 *
 * @array: The array to sort.
 * @size: THe length of the aaray.
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size - i - 1; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
