#include "main.h"
/**
 * leet - encodes a string
 * @i: input variable
 * Return: i
 */
char *leet(char *i)
{
	int x;
	int y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; i[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (i[x] == s1[y])
			{
				i[x] = s2[y];
			}
		}
	}
	return (i);
}
