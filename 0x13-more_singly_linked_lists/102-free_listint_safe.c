#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list, even if it contains a loop
 * @h: pointer to the head of the linked list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			count++;
		}
		else
		{
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
