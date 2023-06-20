#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: - input string to calculate
 *
 * Return: The length of the the input string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * *_strcpy - The function returns a copy of a string src
 * @src: The source input string to copy
 * @dest: the destination to copy string src
 *
 * Return: new copied string dest
 */

char *_strcpy(char *src, char *dest)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - The function creates a new dog of type struct dog_t
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: A pointer to the new function or Null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
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
