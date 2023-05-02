#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL )
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
