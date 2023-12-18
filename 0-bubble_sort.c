#include "sort.h"

/**
 * bubble_sort - sorts an array of integer in asceding order
 * @array: array of int to be sorted
 * @size: number of element in the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	/** if size of array is less than 2 do nothin */
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/** swap element in array */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/** print array after swapping */
				print_array(array, size);
			}
		}
	}
}

