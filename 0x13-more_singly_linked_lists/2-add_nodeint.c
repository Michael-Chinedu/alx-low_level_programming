#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning of a linked list
 * @head:The  pointer to the first node in the list
 * @n: The data to insert in that new node
 *
 * Return: pointer to the new node if successful, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

