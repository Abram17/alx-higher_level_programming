#include "lists.h"

/**
 * insert_node - Insert a node in a sorted linked list
 * @head: The linked list
 * @number: The number to insert
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *old = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (!*head)
		*head = new;
	else if (number < old->n)
	{
		new->next = old;
		*head = new;
	}
	else
	{
		while (old->next)
		{
			if (number > old->next->n)
				old = old->next;
			else
				break;
		}
		new->next = old->next;
		old->next = new;
	}

	return (new);
}
