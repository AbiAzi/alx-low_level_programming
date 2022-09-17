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

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
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
