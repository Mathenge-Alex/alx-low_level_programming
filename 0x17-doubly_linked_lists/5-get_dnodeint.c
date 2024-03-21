#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Function gets a node from a doubly linked list
  * @head: The head of the list
  * @index: Index to find in the list
  *
  * Return: Returns the specific node of the list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int iteration_times = 0;

	if (head)
	{
		while (current_node != NULL)
		{
			if (iteration_times == index)
				return (current_node);

			current_node = current_node->next;
			++iteration_times;
		}
	}

	return (NULL);
}
