#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *elist;

	while ((elist = head) != NULL)
	{
		head = head->next;
		free(elist->str);
		free(elist);
	}
}
