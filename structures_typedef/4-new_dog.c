#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * *new_dog - function that creates a new dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 * Return: the new structure of the dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o, i;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	n = o = 0;

	while (name[n++])
		;
	while (owner[o++])
		;

	dog->name = malloc(n * sizeof(dog->name));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= n; i++)
		dog->name[i] = name[i];

	dog->age = age;
	dog->owner = malloc(o * sizeof(dog->owner));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= o; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
