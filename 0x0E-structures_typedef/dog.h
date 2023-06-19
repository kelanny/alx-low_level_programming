#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: This struct represent a data type called dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
