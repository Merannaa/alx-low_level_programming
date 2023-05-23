#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new dog - creates a new dog
 * @name : name
 * @age: age
 * @owner: owner
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = strlen(name) + 1;
		owner_len = strlen(owner) + 1;
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
			return (NULL);

		new_dog->name = malloc(sizeof(char) * (name_len + 1));
		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}

		new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
		if (new_dog->owner == NULL)
		{
			 free(new_dog->name);
			 free(new_dog);
			return (NULL);
		}

		new_dog->name = _strcpy(new_dog->name, name);
		new_dog->owner = _strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}

	return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copies the string
 * @dest: destination it value
 * @src: source it value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b++] = '\0';
	return (dest);
}
