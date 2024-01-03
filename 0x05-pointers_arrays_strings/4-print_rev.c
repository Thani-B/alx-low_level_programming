#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: pointer to string
 * Return: nothing
 */
void print_rev(char *str)
{
	char *end;

	for (end = str; *end != '\0'; end++)
		;
	for (end--; end >= str; end--)
		_putchar(*end);
	_putchar('\n');
}
