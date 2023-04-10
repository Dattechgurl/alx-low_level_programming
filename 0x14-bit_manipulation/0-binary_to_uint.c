#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string containing binary number that is pointing to 0 and 1.
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int k;
if (b == NULL)
return (0);
for (k = 0; b[k]; k++)
{
if (b[k] < '0' || b[k] > '1')
return (0);
val = 2 * val + (b[k] - '0');
}
return (val);
}
