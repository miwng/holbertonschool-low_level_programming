#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _length - Entry point
 *
 * @str: string
 *
 * Return: Always 0 (Success)
 */

int _length(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - Entry point
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: Always 0 (Success)
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Entry point
 *
 * @name: name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_length(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_length(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}
