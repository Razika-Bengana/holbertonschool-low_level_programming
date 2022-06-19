#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input for the reverse
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b;
	char r = s[0];

	while (s[a] != '\0')
		a++;

	for (b = 0; b < a; b++)
	{
		a--;
		r = s[b];
		s[b] = s[a];
		s[a] = r;
	}
}
