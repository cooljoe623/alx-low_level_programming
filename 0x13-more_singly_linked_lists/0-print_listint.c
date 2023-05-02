#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * return: integer
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
    const listint_t *tmp = h;
    size_t count = 0;

    while (tmp != NULL)
    {
        printf("%d\n", tmp->n);
        count++;
        tmp = tmp->next;
    }

    return (count);
}
