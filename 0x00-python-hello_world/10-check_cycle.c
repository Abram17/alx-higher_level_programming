#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks for cycling list
 *
 * @list: list to check
 *
 * Return: 1 if true
 *         0 otherwise
*/

int check_cycle(listint_t *list)
{
	listint_t *p = list, *pp = list;

	while (pp && pp->next)
	{
		p = p->next;
		pp = pp->next->next;
		if (p == pp)
			return (1);
	}

	return (0);

}
