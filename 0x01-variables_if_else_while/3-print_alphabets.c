#include <stdio.h>
/**
 * main - start program
 * Return: 0
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	upper = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
