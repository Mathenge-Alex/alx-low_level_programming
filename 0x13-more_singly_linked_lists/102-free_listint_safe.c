#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * _ra - Function reallocates memory to the nodes
 * in a linked list for a pointers' array
 * @list: The old list to append
 * @size: New list size
 * @new: The new node to add to list
 *
 * Return: Returns a pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_lst;
	size_t j;

	new_lst = malloc(size * sizeof(listint_t *));
	if (new_lst == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		new_lst[j] = list[j];
	new_lst[j] = new;
	free(list);
	return (new_lst);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t j, number = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (number);
	while (*head != NULL)
	{
		for (j = 0; j < number; j++)
		{
			if (*head == list[j])
			{
				*head = NULL;
				free(list);
				return (number);
			}
		}
		number++;
		list = _ra(list, number, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (number);
}
