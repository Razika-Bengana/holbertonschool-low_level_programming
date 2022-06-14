#include <stdlib.h>
#include <stdio.h>
/**
 * print the Fizz-Buzz test
 * Return: the result of void
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
			printf("FizzBuzz");
		else if (number % 5 == 0)
			printf("Buzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else
			printf("%i", number);

		if (number < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
