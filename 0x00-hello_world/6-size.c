#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;
	float b;
	double d;
	char c;

	printf("the size of int: %zu Bytes \n," sizeof(a));
	printf("the size of float: %zu Bytes \n," sizeof(b));
	printf("the size of double: %zu Bytes \n," sizeof(d));
	printf("the size of char: %zu Bytes \n," sizeof(c));

	return (0);
}
