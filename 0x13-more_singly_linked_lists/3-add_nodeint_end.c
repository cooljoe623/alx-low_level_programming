#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Double pointer to the head node of the list
 * @n: Integer value to store in the new node
 *
 * Return: Address of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node, *node_2;

    node = malloc(sizeof(listint_t));
    if (node == NULL)
        return (NULL);

    node->n = n;
    node->next = NULL;

    if (*head == NULL)
    {
        *head = node;
	return (node);
    }
    else
    {
        
        node_2 = *head;
        while (node_2->next != NULL)
        {
            node_2 = node_2->next;
        }

        
        node_2->next = node;
    }

    return (node);
}
