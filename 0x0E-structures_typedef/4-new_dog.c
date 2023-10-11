#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
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
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lent1;
	int lent2;

	lent1 = _strlen(name);
	lent2 = _strlen(owner);
	dog->name = malloc(sizeof(char) * (lent1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return(NULL);
	}
	dog->owner = malloc(sizeof(char) * (lent2 + 2));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return(NULL);
	}
	dog->age = age;
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	return (dog);
}
