#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	if (b < 6 && b != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	return (0);
}
