#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer 10 bytes at a time 
 * @b: the buffer to be printed
 * @size: the number of bytes to be printed from the buffer
 */
void print_buffer(char *b, int size)
{
	int bt, in;

	for (bt = 0; bt < size; bt += 10)
	{
		printf("%08x: ", bt);
		for (in = 0; in < 10; in++)
		{
			if ((in + bt) >= size)
				printf(" ");
			else
				printf("%02x", *(b + in + bt));
			if ((in % 2) != 0 && in != 0)
				printf(" ");
		}
		for (in = 0; in < 10; in++)
		{
			if ((in + bt) >= size)
				break;
			else if (*(b + in + bt) >= 31 && *(b + in + bt) <= 126)
				printf("%c", *(b + in + bt));
			else
				printf(".");
		}
		if (bt >= size)
			continue;

		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
