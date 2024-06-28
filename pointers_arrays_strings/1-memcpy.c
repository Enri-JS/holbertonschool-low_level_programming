#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: where the memory is stored
 *@src: where the memory is copied
 *@n: the number of bytes
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
