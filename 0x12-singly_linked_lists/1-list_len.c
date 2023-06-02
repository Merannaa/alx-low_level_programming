#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: const list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int fun = 0;

	while (h)
	{
		fun++;
		h = h->next;
	}
	return (fun);
}
