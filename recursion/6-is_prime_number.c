#include <stdio.h>
#include "main.h"
/**
 *is_prime_number - returns a number depending on the input integer
 *@n: input value
 *@i: number of iterations
 *Return: 1 if input integer is a prime number, 0 if otherwise
 */
int ver_prime(int n, int i);
int is_prime_number(int n)
{
	return (ver_prime(n, 1));
}
/**
 * ver_prime - verifies if a number is a prime number
 * @n: input value
 * @i: number of iterations
 * Return: 1 if the number is prime, otherwise 0
 */
int ver_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (ver_prime(n, i + 2));
}
