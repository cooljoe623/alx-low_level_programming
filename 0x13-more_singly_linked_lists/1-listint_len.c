#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: int.
 *
 * */

size_t listint_len(const listint_t *h)
{
        size_t count = 0;
        const listint_t *tp;

	tp = h;
       while (tp)
        {
                count++;
                tp = tp->next;
        }

        return count;
}
