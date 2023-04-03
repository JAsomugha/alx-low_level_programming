#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the begining of a list
 * @head: pointer to the struct
 * @n: name of new node
 *
 * Return: struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (head == NULL)
	{
		(*head)->next = temp;
	}
	else
	{
		temp->next = *head;
		(*head) = temp;
	}
	return (temp);
}
