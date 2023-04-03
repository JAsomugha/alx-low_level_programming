#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: value of the list
 *
 * Return: datatype of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int node = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		node++;
	}
	return (node);
}
