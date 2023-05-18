#include "main.h"

/**
 * flip_bits - count numbr of bits to be changed
 * from one number to other
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
