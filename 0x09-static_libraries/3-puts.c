#include "main.h"
<<<<<<< HEAD
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
=======

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is input string
 *
>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
 */

void _puts(char *str)
{
<<<<<<< HEAD
while (*str)
_putchar(*str++);

_putchar('\n');
=======
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');

>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
}
