#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - A program that print length of a string
 * @s: variable s
 * Return: (0)
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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcpy -Program that copy strings
 * @dest: Variable destination for copy strings
 * @src: variable source for destinatination strings
 * Return: (0)
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - A program store variable name and owner
 * @name: varaible name
 * @age: variable age
 * @owner: variable owner
 * Return: (0)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	 int lent1;
	 int lent2;

	 dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	lent1 = _strlen(name);
	lent2 = _strlen(owner);
	dog->name = malloc(sizeof(char) * (lent1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lent2 + 2));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->age = age;
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	return (dog);
}
