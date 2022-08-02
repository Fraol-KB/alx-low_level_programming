#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog or Null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t_dog;
	int i, name_len, owner_len;

	t_dog = malloc(sizeof(*t_dog));
	if (t_dog == NULL || !(name) || !(owner))
	{
		free(t_dog);
		return (NULL);
	}

	name_len = 0;
	while (name[name_len])
		name_len++;

	owner_len = 0;
	while (owner[owner_len])
		owner_len++;

	t_dog->name = malloc(name_len + 1);
	t_dog->owner = malloc(owner_len + 1);

	if (!(t_dog->name) || !(t_dog->owner))
	{
		free(t_dog->owner);
		free(t_dog->name);
		free(t_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		t_dog->name[i] = name[i];

	t_dog->name[i] = '\0';
	t_dog->age = age;

	for (i = 0; i < owner_len; i++)
		t_dog->owner[i] = owner[i];

	t_dog->owner[i] = '\0';
	return (t_dog);
}
