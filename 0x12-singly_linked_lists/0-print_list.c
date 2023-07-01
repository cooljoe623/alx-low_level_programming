#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * main: function that prints elements of a list_t list
 * @h: pointer to the list 
 *
 * return: number of nodes
 */

size_t print_list(const list_t *h);
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%s\n", h->str);
		count++;

		h = h->next;
	}
	return count;
}
