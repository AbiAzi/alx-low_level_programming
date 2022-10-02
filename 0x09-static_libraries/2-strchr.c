#include "main.h"
<<<<<<< HEAD
#include <stddef.h>
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
=======
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
		a = *s++;
		if (a == c)
		{
		return (s - 1);
		}
		if (a == 0)
		{
		return (NULL);
		}
		}
>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
}
