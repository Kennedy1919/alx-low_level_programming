#include "main.h"
/**
 * mallock_checked - function that allocates memory using malloc
 * @b: bytes allocated
 * Return: a pointer
 */
void *mallock_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == Null)
		exit(98);
	Return(ptr);
}
