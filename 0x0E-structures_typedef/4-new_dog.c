#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: Age of dog
  * @owner: Name of owner
  *
  * Return: struct of dog or NULL if failure
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lou_name, lou_owner;

	dog_t *p_dog = NULL;

	lou_name = 0, lou_owner = 0;
	while (name[lou_name] != '\0')
		lou_name++;
	while (owner[lou_owner] != '\0')
		lou_owner++;

	p_dog = malloc(sizeof(struct dog));
	if (p_dog == NULL)
	{
		free(p_dog);
		return (NULL);
	}

	p_dog->name = malloc(lou_name + 1);
	if (p_dog->name == NULL)
	{
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	p_dog->owner = malloc(lou_owner + 1);
	if (p_dog->owner == NULL)
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i <= lou_name; i++)
		p_dog->name[i] = name[i];
	for (i = 0; i <= lou_owner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->age = age;
	return (p_dog);
}
