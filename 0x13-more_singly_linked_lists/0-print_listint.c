#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/


typedef struct node {
    char* str;
    struct node* next;
} node_t;

size_t print_list(node_t* head) {
    node_t* current = head;
    size_t count = 0;
    while (current != NULL) {
        printf("%s\n", current->str);
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    /* Create the list*/
    node_t* head = malloc(sizeof(node_t));
    head->str = strdup("hello");
    node_t* second = malloc(sizeof(node_t));
    second->str = strdup("world");
    head->next = second;
    second->next = NULL;

    /* Print the list*/
    size_t count = print_list(head);
    printf("Number of nodes: %lu\n", count);

    /* Free memory*/
    node_t* current = head;
    while (current != NULL) {
        node_t* next = current->next;
        free(current->str);
        free(current);
        current = next;
    }

    return 0;
}
