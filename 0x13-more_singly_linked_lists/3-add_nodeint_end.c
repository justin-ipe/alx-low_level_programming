#include "lists.h"
/**
 * add_nodeint_end -adds a new node at the end of list
 * @head: Pointer to list
 * @n: Number to add it
 * Return: address of the element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;

	listint_t *cursor = *head;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
	return (NULL);
	if (cursor != NULL)
	{

		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new;
	}
	else
		*head = new;

	return (new);
}
