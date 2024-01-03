#inlude "main.h"
/**
 * puts_half - print half of a string
 * @str: pointer to string
 * Description: print second half of string,
 * if odd, print last 'n' characters,
 * n = (length_of_the_string - 1)/ 2
 * Return: nothing.
 */
void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; str[len] != '\0'; len++)
		;
	n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
