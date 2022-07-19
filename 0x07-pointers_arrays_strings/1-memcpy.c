#include "main.h"
/**
 * _memcpy - The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest:area where bytes are copied to
 * @src:area where bytes are copied from
 * @src:area where bytes are copied from
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
