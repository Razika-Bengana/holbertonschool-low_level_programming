#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count of type integer
 * @argv: argument vector of type array of pointer to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
