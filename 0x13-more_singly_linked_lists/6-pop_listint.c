#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to list
 */

int pop_listint(list_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;

	n = temp->;
	free(temp);
	return (n);
}
