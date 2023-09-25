#include "lists.h"

/**
 * listint_len - it returns the numbers of element in a listint list
 * @h: The head of the list,Pointer.
 *
 * Return: return the number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
