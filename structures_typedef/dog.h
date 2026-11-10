#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Une structure représentant un chien
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le nom du propriétaire
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
