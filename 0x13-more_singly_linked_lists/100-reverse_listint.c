#include "lists.h"
/**
 * *reverse_listint - Function reverses order of nodes
 * @head:  Head pointer
 * Return: Returns always successful
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd;
	listint_t *backward = NULL;

	if (head  == NULL)
		return (NULL);
	fwd = *head;
	while (fwd != NULL)
	{
		fwd = fwd->next;
		fwd = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = fwd;
	}
	*head = backward;
	return (*head);
}
