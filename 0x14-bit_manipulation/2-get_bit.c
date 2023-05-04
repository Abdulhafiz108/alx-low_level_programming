#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit, or -1 if index is invalid
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63) /* check if index is valid */
		return (-1);

	/* shift n right by index bits, then mask with 1 to get the bit value */
	return ((n >> index) & 1);
}
