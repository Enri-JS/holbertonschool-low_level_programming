#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int m;

	for  (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
