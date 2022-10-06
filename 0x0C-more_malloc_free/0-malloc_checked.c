#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: the size of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
