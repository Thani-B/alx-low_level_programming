#include <stdio.h>
/**
 * main - start program
 * Return: 0
 */
int main(void)
{
	int reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
	putchar(reverse);
	reverse++;
	}
	putchar('\n');
	return (0);
}
