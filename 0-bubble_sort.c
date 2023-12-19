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
	size_t temp;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - j - 1; i++)
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
	}
}
