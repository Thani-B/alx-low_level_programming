#include <stdio.h>
/**
 * main - start program
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
