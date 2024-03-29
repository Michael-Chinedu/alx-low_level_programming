#include "lists.h"

/**
 * Print_dlistint-Prints all the elements of
 * a dlistint_list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_ * h)
{

	int count;

	count = 0;
	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
