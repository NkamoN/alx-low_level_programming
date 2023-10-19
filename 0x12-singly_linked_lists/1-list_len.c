#include <stdlib.h>
#include "lists.h"

/**
 * list_len -Function returns the number of elements in a Linked List
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
 size_t x = 0;

 while (h)
 {
 x++;
 h = h->next;
 }
 return (x);
}
