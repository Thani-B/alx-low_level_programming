#include "main.h"
/**
 * _strcpy - copy string.
 * @dest: string to be copied to.
 * @src: string to copy.
 * Description: copy string pointed to by "src" including '\0',
 * to the buffer pointed to by "dest"
 * Return: pointer to "dest"
 */
char *_strcpy(char *dest, char *src)
{
	char *d;

	for (d = dest; *src != '\0'; src++, d++)
		*d = *src;
	*d = '\0';
	return (dest);
}
