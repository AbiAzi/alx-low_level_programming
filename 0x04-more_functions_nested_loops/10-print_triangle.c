#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for(i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
	_putchar('');
	}

	for (j = 1; j <= i; j++)
	{
	_putchar ('#');
	}
	_putchar("\n");

	}
	}
}
