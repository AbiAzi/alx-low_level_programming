#include "main.h"
<<<<<<< HEAD
/**
*  _strncpy - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/

=======

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
=======
	i = 0;
	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba

	return (dest);
}
