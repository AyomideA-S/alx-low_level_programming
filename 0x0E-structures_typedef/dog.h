#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Struct that stores some information of a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: Struct called "dog" that stores its name, its age,
 * and the name of its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
