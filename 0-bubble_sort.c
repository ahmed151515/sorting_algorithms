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
 * bubble_sort - bubble sort argolrthm
 * @array: array to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag = 1;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				flag = 0;
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		if (flag)
		{
			return;
		}
	}
}
