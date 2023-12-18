#include "sort.h"
/**
 * swap - swap to value
 * @x: value 1
 * @y: value 2
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
/**
 * selection_sort - selection_sort
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
