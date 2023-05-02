#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int my_data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	my_data = tmp->n;
	free(tmp);
	return (my_data);
}
