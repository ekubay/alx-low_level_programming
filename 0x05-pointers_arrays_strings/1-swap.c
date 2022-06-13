#include "main.h"
/**
 * swap_int - sawap value of two argument
 * @a: pointer 1
 * @b: pointer 2
 * Return: success
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
