#include "main.h"
/**
 * _strcat - concatenates two strings
 * @_strlen: checks the length of the string
 * @dest: destination
 * @src: current string
 * Return: new_string
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int len2 = _strlen(src);
	int temp = len + len2;

	if (*dest != temp)
		dest++;
	return (dest);
}
