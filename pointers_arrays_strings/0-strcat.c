#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: current string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *r;

	r = strcat(dest, src);
	printf("The concatenated result is: %s\n", r);
	return (0);
}
