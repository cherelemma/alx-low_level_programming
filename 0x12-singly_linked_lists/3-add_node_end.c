#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a singly linked list.
* @head: a linked list to print
* @str: needs to be duplicated.
*
* Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* Create a new node */
	unsigned int c = 0;

	while (str[c++])
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = --c;

	new_node->next = NULL; /* Point it to null */
	
	/* if head is NULL, it is an empty list */
	if(*head == NULL)
		*head = new_node;
	else
	{
		while(*head->next != NULL)
			*head = *head->next;
	}
	(*head) = new_node;	/* Point head to new node */

	return (*head);
}
