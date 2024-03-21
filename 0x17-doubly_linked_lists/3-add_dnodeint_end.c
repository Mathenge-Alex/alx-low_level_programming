#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Function adds a new node at
  * the end of a doubly linked list
  * @head: Head of the doubly linked list
  * @n: Int number to place in the new node
  *
  * Return: Returns new head of the list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;

		new_node->next = NULL;
		new_node->prev = current_node;
		current_node->next = new_node;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
