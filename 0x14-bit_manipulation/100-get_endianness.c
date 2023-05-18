#include "main.h"

/**
 * get_endianness - check if machine is small or big endians.
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
