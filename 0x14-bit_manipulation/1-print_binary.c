#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: output number in the binary
 */
void print_binary(unsigned long int n)
{
unsigned long int current;
int k, count = 0;
for (k = 63; k >= 0; k--)
{
current = n >> k;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
