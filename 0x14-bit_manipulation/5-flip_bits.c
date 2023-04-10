#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first value of number to get
 * @m: second value of number to get
 *
 * Return: number of bits to flip that get from other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int r, count = 0;
unsigned long int new;
unsigned long int some_val = n ^ m;
for (r = 63; r >= 0; r--)
{
new = some_val >> r;
if (new & 1)
count++;
}
return (count);
}
