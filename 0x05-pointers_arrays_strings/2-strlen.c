#include "main.h"
/**
 * _strlen - return length of a string
 * @s: pointer to string
 * Return: an integer
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
