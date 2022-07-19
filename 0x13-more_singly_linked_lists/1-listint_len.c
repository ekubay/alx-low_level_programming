#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: always success.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	unsigned int c = 0;

	p = h;
	while (p)
	{
		c++;
		p = p->next;
	}
	return (c);
}
