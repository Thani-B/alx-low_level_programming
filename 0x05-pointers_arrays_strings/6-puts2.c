#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: pointer to string
 * Description: start with the first character
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
