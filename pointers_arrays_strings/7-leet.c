#include <stdio.h>
#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string that has to be encoded
 * Return: string (success)
 */
char *leet(char *s)
{
	int a = 0;
	int b;
	char c[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char d[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a])
	{
		for (b = 0; b < 10; b++)
			if (s[a] == c[b])
				s[a] = d[b];
		a++;
	}
	return (s);
}
