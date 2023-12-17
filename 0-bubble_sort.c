#include "sort.h"
/**
 * bubble_sort - function using bubble sort method
 * @array: array holding values to be sorted
 * @size: size of array
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	size_t temp = 0;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
	}
}
