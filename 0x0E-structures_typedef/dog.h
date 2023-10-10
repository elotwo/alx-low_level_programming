#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
#endif
