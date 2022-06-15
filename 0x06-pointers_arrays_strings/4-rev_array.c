#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array of the integer
 * @n: the number of elements of the array
 * Return: success
 */
void reverse_array(int *a, int n)
{
	int l, h, temp;

	for (l = 0, h = n - 1; l < h; l++, h--)
	{
		temp = a[l];
		a[l] = a[h];
		a[h] = temp;
	}
}
