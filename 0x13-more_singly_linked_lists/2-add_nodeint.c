#include "lists.h"

/**
 **add_nodeint - Function adds a node at the start of a list
 *@head: The head
 *@n: An int
 *Return: Returns null or a new element's address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ad;

	new_ad = malloc(sizeof(listint_t));
	if (new_ad == NULL)
		return (NULL);
	new_ad->n = n;
	new_ad->next = *head;
	*head = new_ad;
	return (new_ad);
}
