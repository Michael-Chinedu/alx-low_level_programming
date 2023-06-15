#include <stdlib.h>
#include "main.h"

/**
 * *_Memset - fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Char to copy
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		s[e] = b;
	}

	return (s);
}

/**
 * *_Calloc - allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory
 */
void *_Calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

