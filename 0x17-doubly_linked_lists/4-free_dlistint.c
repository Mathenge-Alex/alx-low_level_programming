#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Function frees a doubly linked list
  * @head: Head of the list
  *
  * Return: Returns nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head, *next = NULL;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
