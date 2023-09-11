#include "baby.h"
/**
 * init_baby - initialize a variable of type struct baby.
 * @d: pointer to the adress to initialize.
 * @name: The baby's name'.
 * @age: The baby's age'.
 * @parent: The baby parent's name.
 */
void init_baby(struct baby *d, char *name, float age, char *parent)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->parent = parent;
	}
}
