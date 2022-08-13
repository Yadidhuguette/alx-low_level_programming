#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nel, *temp;
	size_t echar;

	nel = malloc(sizeof(list_t));
	if (nel == NULL)
		return (NULL);

	nel->str = strdup(str);

	for (echar = 0; str[echar]; echar++)
		;

	nel->len = echar;
	nel->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nel;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nel;
	}

	return (*head);
}
