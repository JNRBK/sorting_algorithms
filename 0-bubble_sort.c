#include "sort.h"

/**
 * swap - function that swap two elements
 * @x: element
 * @y: element
 * Return: nothing
*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * bubble_sort - function using bubble sort method
 * @array: array holding values to be sorted
 * @size: size of array
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int swp;

	if (!array || size < 2)
	{
		return;
	}
	for (j = 0; j < size - 1; j++)
	{
		swp = 0;
		for (i = 0; i < size - j - 1; i++)
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				swp = 1;
			}
	}
}
