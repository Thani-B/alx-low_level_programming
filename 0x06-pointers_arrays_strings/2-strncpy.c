#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: pointer to destination buffer where string will be stored.
 * @src: pointer to source string from which characters will be copied.
 * @n: number of bytes to copy from source.
 * Description: copy n bytes from the src string to the dest string,
 * overwriting the terminating null byte.
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
