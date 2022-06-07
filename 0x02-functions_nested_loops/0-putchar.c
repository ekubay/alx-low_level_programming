#include "main.h"
/**
 * main - that prints _putchar, followed by a new lin.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int i=0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
            
	return (0);
}
