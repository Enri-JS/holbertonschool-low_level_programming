#include "main.h"
#include <stdio.h>
/**
 * main - prints Fizz for mult of 3 and Buzz for mult of 5, FizzBuzz for both
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
