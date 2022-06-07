#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;  
int b;
long int c;
long long int d;
float e;

// sizeof evaluates the size of a variable
printf("Size of char: %zu bytes\n", sizeof(a));
printf("Size of int: %zu bytes\n", sizeof(b));
printf("Size of long int: %zu bytes\n", sizeof(c));
printf("Size of long long int: %zu byte\n", sizeof(d));
 printf("Size of float: %zu byte\n", sizeof(e));
return (0);
}
