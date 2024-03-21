#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Function inserts a new node at a given position
  * @h: Head of the doubly linked list
  * @idx: The index in which insert the new node
  * @n: Number to insert in the new node
  *
  * Return: Returns address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = NULL, *new_node = NULL;
	unsigned int iteration_times = 0, leng = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	leng = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (leng == idx)
		return (add_dnodeint_end(h, n));

	current_node = *h;
	while (current_node != NULL)
	{
		if (iteration_times == idx)
		{
			new_node = create_node(n, current_node, current_node->prev);
			current_node->prev = new_node;
			current_node = new_node;
			current_node->prev->next = new_node;
			return (new_node);
		}

		current_node = current_node->next;
		++iteration_times;
	}

	return (current_node);
}

/**
  * dlistint_len - Function counts the number of
  * elements in a doubly linked list
  * @h: Doubly linked list
  *
  * Return: Returns number of elements in the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lenth = 0;

	while (h != NULL)
	{
		++lenth;
		h = h->next;
	}

	return (lenth);
}

/**
  * create_node - Creates a new node with values
  * @n: Number of the new node
  * @next: Next node of the new node
  * @prev: Previous node of the new node
  *
  * Return: Returns address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
