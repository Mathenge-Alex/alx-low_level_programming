#include "lists.h"

/**
 **add_nodeint_end - Function adds a node at the end of a list_t
 *@head: The head
 *@n: An int
 *Return: Returns null or a new_ad element's address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_ad;
	listint_t *tmp = *head;

	new_ad = malloc(sizeof(listint_t));

	if (!new_ad)
		return (NULL);
	new_ad->n = n;

	if (tmp == NULL)
		*head = new_ad;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_ad;
	}
	return (new_ad);
}
