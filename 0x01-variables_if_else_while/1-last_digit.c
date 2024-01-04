#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - start program
 * Return: 0
 */
int main(void)
{
	int n, lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdgt = n % 10;
	if (lastdgt > 5)
		printf("Last Digit of %d is %d and is greater than 5\n", lastdgt);
	else if (lastdgt == 0)
		printf("Last Digit of %d is %d and is 0\n", lastdgt);
	else if (lastdgt != 0 && lastdgt < 6)
		printf("Last Digit of %d is %d and is less than 6 and not 0\n", lastdgt);
	return (0);
}
