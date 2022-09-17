#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j;
	for (size > 0)
	{
	for (i = 1; j <= size; i++)
	{
	for ((i = size - i); j > 0; j--)
	{
	putchar('');
	}
	for (j = 0; j < i; j++)
	{
	putchar ('#');
	}
	if (i == size)
	{
	continue;
	}
	printf("\n");
	}

	}
	return (0);
}
