#include "lists.h"

/**
 * print_listint - to print the element of listint_t list
 * @h: A pointer to the head of the lists.
 *
 * Return: returns the numbers of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	num++;
	}
	return (num);
}
