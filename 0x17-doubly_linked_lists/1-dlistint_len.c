#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - Function counts the number of
  * elements in a doubly linked list
  * @h: Doubly linked list
  *
  * Return: Returns number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int leng = 0;

	while (h != NULL)
	{
		++leng;
		h = h->next;
	}

	return (leng);
}
