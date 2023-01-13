#include "main.h"
#include <stdlib.h>
/**#include "main.h"*/
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previsouly allocated the memory
 * @old_size: size of old memory
 * @new_size: new size of memory
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	str_ptr = malloc(new_size);
	if (str_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			str_ptr[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			str_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (str_ptr);
}

