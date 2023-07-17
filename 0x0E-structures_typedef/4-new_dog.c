#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 * Return: Pointer to the newly created dog, or NULL if the function fails.
 * Description:function creates new dog by
 * allocating memory for the dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len, owner_len;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
{
	return (NULL);
}
	name_len = strlen(name) + 1;
	owner_len = strlen(owner) + 1;

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
{
	return (NULL);
}
	newDog->name = malloc(name_len * sizeof(char));
	if (newDog->name == NULL)
{
	free(newDog);
	return (NULL);
}
	strncpy(newDog->name, name, name_len);

	newDog->age = age;

	newDog->owner = malloc(owner_len * sizeof(char));
	if (newDog->owner == NULL)
{
	free(newDog->name);
	free(newDog);
	return (NULL);
}
	strncpy(newDog->owner, owner, owner_len);

	return (newDog);
}
