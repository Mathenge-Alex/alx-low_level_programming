#include "lists.h"

/**
 * sum_listint - Function returns sum of all the given data
 * (n) of a listint_t linked list
 * @head: The linked list head
 * Return: Returns sum
 */

int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (head == NULL)
		return (0);

	curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
