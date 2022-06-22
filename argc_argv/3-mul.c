#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that multiples two numbers
 * @argc: argument count of type integer
 * @argv: argument vector of type array of pointer to strings
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{

			product = product * atoi(argv[i]);
		}

		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
