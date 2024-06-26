#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: current string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
