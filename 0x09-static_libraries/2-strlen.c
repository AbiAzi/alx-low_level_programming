#include "main.h"
<<<<<<< HEAD
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
=======

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);
>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
}
