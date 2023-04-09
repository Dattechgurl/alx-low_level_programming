#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return:  the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int k = 0;
if (b == NULL)
return (0);
while (b[k] == '0' || b[k] == '1')
{
val <<= 1;
val += b[k] - '0';
k++;
}
return (val);
}
