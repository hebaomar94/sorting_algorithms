#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers \
 * in ascending order using the insertion sort algorithm.
 * @list: The doubly linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *next = NULL;

	if (list == NULL || *list == NULL)
		return;
	temp = (*list)->next;
	for (; temp; temp = next)
	{
		next = temp->next;
		while (temp->prev && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->next->prev;
			temp->next->prev = temp;
			if (!temp->prev)
				*list = temp;
			else
				temp->prev->next = temp;
			print_list(*list);
		}
		temp = next;
	}
}

