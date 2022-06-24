#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that adds positive numbers
 * @argc: argument count of type integer
 * @argv: argument vector of type array of pointer to strings
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (b = 1; b < argc; b++)
	{
		for (a = 0; argv[b][a]; a++)
		{
			if (argv[b][a] < '0' || argv[b][a] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		c = c + atoi(argv[b]);
	}
	printf("%d\n", c);
	return (0);
}
