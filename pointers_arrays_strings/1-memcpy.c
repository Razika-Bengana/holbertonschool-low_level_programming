#include "main.h"
/**
 * _memcpy - copies n bytes from src memory area to dest memory area
* @src : memory area source
* @dest : memory area destination
* @n : number of bytes to be copied
* Return : string (success)
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)

		dest[a] = src[a];
	return (dest);
}
