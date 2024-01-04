#include "main.h"
/**
 * _strcat - concatentes two strings.
 * @dest: pointer to string.
 * @src: pointer to string.
 * Description: append the src string to the dest string,
 * overwriting the terminating null byte.
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *d;

	for (d = dest; *d != '\0'; d++)
		;
	for ( ; *src != '\0'; d++, src++)
		*d = *src;
	*d = '\0';
	return (dest);
}
