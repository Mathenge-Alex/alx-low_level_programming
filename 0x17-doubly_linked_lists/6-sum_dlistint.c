#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Function finds sum of all
  * data (n) in a doubly linked list
  * @head: Head of the list
  *
  * Return: Returns sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (head)
	{
		while (current_node != NULL)
		{
			sum += current_node->n;
			current_node = current_node->next;
		}
	}

	return (sum);
}
