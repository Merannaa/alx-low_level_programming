#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *yeni = h;
	size_t count = 0;

	while (yeni != NULL)
	{
		printf("%d\n", yeni->n);
		count += 1;
		yeni = yeni->next;
	}
	return (count);
}
