#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains information on a dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: contains information on a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef of dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
