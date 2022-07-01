#include "main.h"
/**
 * prime2 - function that prints 2 integers
 * @a: an integer
 * @b: an integer
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}


/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * number, otherwise return 0
 * @n: an integer
 * Return: 1 if there is a prime number, 0 if no prime number
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (prime2(n, 2));
}
