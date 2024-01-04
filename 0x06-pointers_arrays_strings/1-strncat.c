#include "main.h"
/**
 * _strncat - concatentes two strings.
 * @dest: pointer to string.
 * @src: pointer to string.
 * @n: number of bytes to concatenate.
 * Description: append the src string to the dest string,
 * overwriting the terminating null byte.
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d;

	for (d = dest; *d != '\0'; d++)
		;
	for ( ; *src != '\0' && n > 0; d++, src++, n--)
		*d = *src;
	*d = '\0';
	return (dest);
}
