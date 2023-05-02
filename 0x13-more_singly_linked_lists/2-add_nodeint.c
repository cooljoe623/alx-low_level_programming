#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *node

	node = malloc(sizeof(listint_t));
    if (node == NULL)
        return NULL;

    node->n = n;
    node->next = *head;
    *head = node;

    return (*head);
}
