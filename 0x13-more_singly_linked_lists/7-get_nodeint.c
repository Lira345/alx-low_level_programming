#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 *
 * @head: pointer
 * @index: index of the node
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int k;
current = head;
k = 0;
while (current != NULL && k < index)
{
current = current->next;
k++;
}
return (current);
}
