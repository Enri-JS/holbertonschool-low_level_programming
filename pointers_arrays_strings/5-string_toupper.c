#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @p: the pointer
 * Return: the variable p
 */
char *string_toupper(char *p)
{
int x;

x = 0;
while (p[x] != '\0')
{
	if (p[x] >= 'a' && p[x] <= 'z')
		p[x] = p[x] - 32;
	x++;
}
return (p);
}
