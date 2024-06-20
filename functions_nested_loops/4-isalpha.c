#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * Return: returns to 1 if c is a letter, returns to 0 otherwise
 * @c: character that is being checked
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
