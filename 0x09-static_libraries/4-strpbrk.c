#include "main.h"
<<<<<<< HEAD
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s of any of the bytes in
*the string accept
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
=======
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

		for (i = 0; *s != '\0'; i++)
		{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (*s == accept[j])
		{
		return (s);
		}
		}
		s++;
		}

		return (NULL);
}

>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
