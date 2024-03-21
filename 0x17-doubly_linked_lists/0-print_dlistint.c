#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Function prints all the elements of a doubly linked list
 * @h: The doubly linked list to be printed
 * Return: Returns number of nodes of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int leng = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++leng;
		h = h->next;
	}

	return (leng);
}
