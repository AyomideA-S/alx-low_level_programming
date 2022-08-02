#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct of type dog
 */
typedef struct dog dog_t;

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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
