#include <stdio.h>
#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string that has to be changed
 * Return: string (success)
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a])
	{
		while (!(s[a] >= 'a' && s[a] <= 'z'))
			a++;

		if (s[a - 1] == ' ' ||
		    s[a - 1] == '\t' ||
		    s[a - 1] == '\n' ||
		    s[a - 1] == ',' ||
		    s[a - 1] == ';' ||
		    s[a - 1] == '.' ||
		    s[a - 1] == '!' ||
		    s[a - 1] == '?' ||
		    s[a - 1] == '"' ||
		    s[a - 1] == '(' ||
		    s[a - 1] == ')' ||
		    s[a - 1] == '{' ||
		    s[a - 1] == '}' ||
		    a == 0)
			s[a] -= 32;
		a++;
	}
	return (s);
}
