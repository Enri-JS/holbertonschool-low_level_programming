#include "main.h"
/**
 * _islower - Checks the c character
 * @c: The character that needs to be checked
 * Return: Displays 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
