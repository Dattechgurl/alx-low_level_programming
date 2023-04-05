#include "lists.h"
/**
 *  free_listint -  frees a linked list
 *  @head: pointer to the head of the listint to free
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
