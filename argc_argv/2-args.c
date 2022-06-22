#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives (1 argument per line)
 * @argc: argument count of type integer
 * @argv: argument vector of type array of pointer to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
