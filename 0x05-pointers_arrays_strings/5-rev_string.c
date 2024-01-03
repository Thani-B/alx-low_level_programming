#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer ot string
 * Return: nothing
 */
void rev_string(char *s)
{
	char *end;
	char temp;

	for (end = s; *end != '\0'; end++)
		;
	for (end--; s < end; s++, end--)
	{
		temp = *s;
		*s = *end;
		*end = temp;
	}
}
