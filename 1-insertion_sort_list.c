#include "sort.h"
/**
 * swap - swap to value
 * @list: list
 * @x: value 1
 * @y: value 2
 */
void swap(listint_t **list, listint_t *x, listint_t *y)
{
	if (x == NULL || y == NULL || x->n == y->n)
	{
		return;
	}

	if (x->prev != NULL)
	{
		x->prev->next = y;
	}
	else
	{
		(*list) = y;
	}

	if (y->next != NULL)
	{
		y->next->prev = x;
	}

	x->next = y->next;
	y->prev = x->prev;
	x->prev = y;
	y->next = x;
}
/**
 * insertion_sort_list - insertion_sort_list
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *key;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	for (i = (*list)->next; i != NULL; i = i->next)
	{
		key = i;

		j = i->prev;

		while (j != NULL && j->n > key->n)
		{
			swap(list, j, j->next);
			print_list(*list);
			j = j->prev->prev;
		}
	}
}
