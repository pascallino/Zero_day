#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number of elements
 * @nmemb: The number of slots
 * @size: The byte size of each array slot
 * Return: If nmemb = 0 or if size = 0 return NULL,, or the function fails -NULL else return a pounter.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

if (nmemb  < 1 || size < 1)
{
	return (NULL);
}
p = calloc(nmemb, sizeof(size));
if (p == NULL)
{
	return (NULL);
}
return (p);
}
