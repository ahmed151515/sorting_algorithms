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
 * partition - partition
 * @arr: arr
 * @low: low
 * @high: high
 * @size: size
 * Return: pofgf
 */
int partition(int *arr, int low, int high, int size)
{
	int pivot = arr[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}

	swap(&arr[i + 1], &arr[high]);
	print_array(arr, size);

	return (i + 1);
}
/**
 * recursive - recursive
 * @array: array
 * @low: low
 * @high: high
 * @size: size
 */
void recursive(int *array, int low, int high, int size)
{
	if (low < high)
	{
		int p = partition(array, low, high, size);

		recursive(array, low, p - 1, size);
		recursive(array, p + 1, high, size);
	}
}
/**
 * quick_sort -quick_sort
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
