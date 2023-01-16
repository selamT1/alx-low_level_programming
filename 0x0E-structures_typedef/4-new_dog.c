#include <stdlib.h>
#include "dog.h"
/**
*_strlen - returns the length of a string
*@s: string ptr
*
* Return: measured lenght
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies src string to dest string wint '\0';
* @dest: destination pointer
* @src: source pointer
 *
* Return: dest pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i, stlen;

	stlen = 0;
	while (src[stlen])
		stlen++;
	for (i = 0; i < stlen; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name ptr
 * @age: age ptr
 * @owner: owner ptr
 * Return: ptr if successed or NULL if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int stlen1 = _strlen(name);
	int stlen2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (stlen1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (stlen2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
