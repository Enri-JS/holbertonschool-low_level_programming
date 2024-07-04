#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 *@str: character to be used
 *Return: Always 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int n, d = 0;

	if (str == NULL)
		return (NULL);

	n = 0;
	while (str[n] != '\0')
		n++;

	aaa = malloc(sizeof(char) * (n + 1));

	if (aaa == NULL)
		return (NULL);

	for (d = 0; str[d]; d++)
		aaa[d] = str[d];
	return (aaa);
}
