#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: inpot array
 * Return: always success
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		i++;
		_putchar('\n');
	}
}

