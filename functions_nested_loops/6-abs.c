#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * n - character that will be computed
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (0);
}
