#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		/* shift n right by i bits and store result in current */
		current = n >> i;

		if (current & 1) /* check if the rightmost bit is 1 */
		{
			_putchar('1');
			count++;
		}

		else if (count) /* if count is non-zero, print a 0 */
			_putchar('0');
	}

	if (!count) /* if count is zero, n is 0 so print a single 0 */
		_putchar('0');
}
