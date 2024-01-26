#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function creates new data structure for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	new_dog->name = malloc(sizeof(char) * name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	owner_len = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - function determines the length of a string
 * @s: string pointer
 * Return: the length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	;
	return (a);
}

/**
 * _strcpy - function copies a pointed string
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: destiny string address
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
