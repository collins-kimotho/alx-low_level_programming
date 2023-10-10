#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: A new type struct that containes information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 *
 * Description: Defines a new type dog_t as a new name for the type struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
