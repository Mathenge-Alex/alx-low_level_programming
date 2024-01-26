#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * cur_dog - function creates new data structure for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Pointer to new dog
 **/
dog_t *cur_dog(char *name, float age, char *owner)
{
	dog_t *cur_dog;
	int name_len, owner_len;

	cur_dog = malloc(sizeof(dog_t));
	if (cur_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	cur_dog->name = malloc(sizeof(char) * name_len + 1);
	if (cur_dog->name == NULL)
	{
		free(cur_dog);
		return (NULL);
	}
	cur_dog->name = _strcpy(cur_dog->name, name);
	owner_len = _strlen(owner);
	cur_dog->owner = malloc(sizeof(char) * owner_len + 1);
	if (cur_dog->owner == NULL)
	{
		free(cur_dog->name);
		free(cur_dog);
		return (NULL);
	}

	cur_dog->owner = _strcpy(cur_dog->owner, owner);
	cur_dog->age = age;

	return (cur_dog);
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
