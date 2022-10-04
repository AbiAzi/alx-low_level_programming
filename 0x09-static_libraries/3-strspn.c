#include "main.h"
<<<<<<< HEAD
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
=======

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
		int i, j, f, flag;

		f = 0;

		for (i = 0; s[i] != '\0'; i++)
		{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
		f++;
		flag = 1;
		}
		}
		if (flag == 0)
		{
		return (f);
		}
		}
		return (0);

>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
}
