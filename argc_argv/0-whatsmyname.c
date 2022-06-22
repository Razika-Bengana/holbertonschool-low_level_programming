#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name
 * @argc: argument count of type integer
 * @argv: argument vector of type array of pointer to strings
 * Return: 0
 */
int main (int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
