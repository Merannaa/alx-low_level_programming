#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 * @h: const list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int fun = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		fun++;
		h = h->next;
	}
	return (fun);
}
