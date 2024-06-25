#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: char type of the string
 * @src: char type of he string
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');
	return (dest);
}
