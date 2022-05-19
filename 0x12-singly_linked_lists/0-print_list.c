#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list.
* @h: a linked list to print
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", h->str);

    	printf("%d", h->len);
    	++counter;
	}

return (counter;
}
