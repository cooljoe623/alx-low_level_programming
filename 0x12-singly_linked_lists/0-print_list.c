#include "lists.h"
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
/*
 * the print_list will print all the elements of a linked list
 * print_list - prints all elements of a list_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
	{
	size_t n = 0;

	while (h != NULL)
	{
		if (!h->str==NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
