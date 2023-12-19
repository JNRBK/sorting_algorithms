#include "sort.h"
/**
 * insertion_sort_list - sorting insertion algorithom of a double linked list
 * @list: double pointer to a list
 * Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *lst, *next, *temp;

	if (!list || !*list || !(*list)->next)
	{
		return;
	}

	lst = (*list)->next;

	while (lst != NULL)
	{
		next = lst->next;
		temp = lst;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;

			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev != NULL)
			{
				temp->prev->next = temp;
			}
			else
			{
				*list = temp;
			}
			print_list(*list);
		}
		lst = next;
	}
}
