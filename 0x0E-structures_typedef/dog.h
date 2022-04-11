#ifndef DOG_H
#define DOG_H
/**
* struct dog - is a structure representation of Dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Description: is a structure representation of Dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
#endif
