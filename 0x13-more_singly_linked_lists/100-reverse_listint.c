#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *k;
	listint_t *l;

	k = NULL;
	l = NULL;

	while (*head != NULL)
	{
		l = (*head)->next;
		(*head)->next = k;
		k = *head;
		*head = l;
	}

	*head = k;
	return (*head);
}
