#include "lists.h"

/**
 *sum_listint - return the sum of all data (n) in the lists
 *@head: a pointer to the nodes
 *Return: the sum of all data in the list or 0 if the list is empty.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
