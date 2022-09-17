#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
	for ((j = size - i); j > 0; j--)
	{
	putchar('');
	}

	for (j = 0; j < i; j++);
	{
	putchar ('#')
	}

	if (i == size)
	{
	continue;
	}

	putchar("\n");

	}
	return (0);
	}
}
