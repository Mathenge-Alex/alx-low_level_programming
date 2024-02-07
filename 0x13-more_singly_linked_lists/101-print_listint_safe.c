#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _r - Function reallocates memory to the nodes in a linked list
 * for an array of pointers
 * @list: Old list to append
 * @size: new list size
 * @new: new node to be added to the list
 *
 * Return: Returns pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_lst;
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
 * print_listint_safe - Function prints a linked list of listint_t
 * @head: The pointer to the list start
 *
 * Return: Returns number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (j = 0; j < num; j++)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
