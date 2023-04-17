#include <string.h>
#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: who owns the dog
 * Return: struct pointer dog NULL if function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;

newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
	return (NULL);
}

newdog -> name = malloc((strlen(name) + 1) * sizeof(char));
if (newdog -> name == NULL)
{
	return (NULL);
}
else
{
	strcpy(newdog -> name, name);
}
newdog -> age = age;
newdog -> owner = malloc((strlen(owner) + 1) * sizeof(char));
if (newdog -> owner == NULL)
{
	return (NULL);
}
else
{
	strcpy(newdog -> owner, owner);
}
return (newdog);
}
