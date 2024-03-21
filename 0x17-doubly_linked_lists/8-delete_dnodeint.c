#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - Function deletes the node at index
  * @head: Head of the node
  * @index: Index of the node that should be deleted
  *
  * Return: Returns 1 on success or -1 on failure
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = NULL, *temp = NULL;
	unsigned int leng = 0;

	if (head && *head)
	{
		leng = dlistint_len(*head);
		if (index > leng)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		current_node = get_dnodeint_at_index(*head, index);
		if (current_node)
		{
			temp = current_node;
			if (leng - 1 == index)
				current_node->prev->next = current_node->next;
			else
			{
				current_node->prev->next = current_node->next;
				current_node->next->prev = current_node->prev;
			}

			free(temp);
			return (1);
		}
	}

	return (-1);
}

/**
  * delete_first_dnode - Removes the first node of a doubly linked list
  * @head: Head of the list
  *
  * Return: 1 if deleted
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current_node = *head, *temp = NULL;

	temp = current_node;
	if (current_node->next)
	{
		current_node = current_node->next;
		current_node->prev = temp->prev;
		*head = current_node;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: Head of the list
  * @index: Index to find in the list
  *
  * Return: Returns specific node of the list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current_node != NULL)
		{
			if (iter_times == index)
				return (current_node);

			current_node = current_node->next;
			++iter_times;
		}
	}

	return (NULL);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lnth = 0;

	while (h != NULL)
	{
		++lnth;
		h = h->next;
	}

	return (lnth);
}
