#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * of integers in ascending order
 *
 * @list: Double pointer to a list of type listint_t
 *
 * Returns: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev_ptr = NULL, *hunter = NULL,
		  *anchor = NULL, *assistant = NULL;

	if (list == NULL || *list == NULL)
		return;
	anchor = prev_ptr = *list;
	hunter = prev_ptr->next;
	while (hunter != NULL)
	{
		assistant = hunter;
		prev_ptr = hunter->prev;
		if (hunter->n < prev_ptr->n)
		{
			hunter = hunter->next;
			while (assistant->n < assistant->prev->n)
			{
				anchor = assistant;
				prev_ptr->next = anchor->next;
				anchor->next->prev = prev_ptr;
				anchor->prev = prev_ptr->prev;
				if (prev_ptr->n == (*list)->n)
					prev_ptr->prev = *list;
				else
				{
					prev_ptr->prev->next = anchor;
					prev_ptr->prev = anchor;
				}
				anchor->next = prev_ptr;
				print_list(*list);
				prev_ptr = anchor->prev;
				assistant = prev_ptr->next;
			}
		}
		else
		{
			hunter = hunter->next;
			prev_ptr = prev_ptr->next;
		}
	}
}

