#ifndef DOG_H
#define DOG_H

/**
 * struct dog - metadatas about a dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* DOG_H */
