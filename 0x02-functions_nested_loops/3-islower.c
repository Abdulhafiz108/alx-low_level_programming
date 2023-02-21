#include "main.h"
/**
 * _islower - checks for lowercase letter
 * @c: character to be checked
 * Return: 1 for lowercase character and 0 for else
 */
int int_islower(int c)

{

	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
