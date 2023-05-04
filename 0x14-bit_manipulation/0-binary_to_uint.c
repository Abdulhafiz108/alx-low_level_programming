#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing the binary number
 * Return: the converted number, or 0 if b is NULL or contains
 * non-binary digits
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (!b) /* check if b is NULL */
		return (0);

	while (*b) /* loop through string until the end is reached */
	{
		if (*b != '0' && *b != '1') /* check if digit is binary */
			return (0);

		/* update dec_val by left-shifting previous value and adding current digit */
		dec_val = (dec_val << 1) | (*b - '0');
		b++; /* move to next digit in string */
	}

	return (dec_val);
}
