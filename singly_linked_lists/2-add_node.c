#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head of the list_t list.
 * @str: Character string to be duplicated in the new node.
 *
 * Return: The address of the new element, or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	char *dupstr;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);
	if (str != NULL)
	{
		dupstr = strdup(str);
		if (dupstr == NULL)
			return (NULL);
		while (str[len] != '\0')
			len++;
	}
	else
	{
		dupstr = NULL;
		len = 0;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(dupstr);
		return (NULL);
	}
	newnode->str = dupstr;
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
