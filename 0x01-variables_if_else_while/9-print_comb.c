#include <stdio.h>
/**
 * main - start program
 * Return: 0
 */
int main(void)
{
	int comb;

	comb = 48;
	while (comb <= 57)
	{
		putchar(comb);
		if (!(comb == 57))
		{
			putchar(44);
			putchar(32);
		}
		comb++;
	}
	putchar(10);
	return (0);
}
