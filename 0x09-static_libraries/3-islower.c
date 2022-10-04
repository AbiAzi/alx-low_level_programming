#include "main.h"
<<<<<<< HEAD
/**
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
=======

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

>>>>>>> ac04762a46480fa45229773f14b12b9136d59fba
