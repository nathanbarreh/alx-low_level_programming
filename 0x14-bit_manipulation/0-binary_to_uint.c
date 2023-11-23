#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;

	int bin_idx;

	if (b == NULL)
	{
		return (0);
	}


	for (bin_idx = 0; b[bin_idx] != '\0'; bin_idx++)
	{

		if (b[bin_idx] != '0' && b[bin_idx] != '1')
		{
			return (0);
		}

		decimal_val <<= 1;
		if (b[bin_idx] == '1')
		{
			decimal_val += 1;
		}
	}

	return (decimal_val);
}

