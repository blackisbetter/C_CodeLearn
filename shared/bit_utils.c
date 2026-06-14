#include "bit_utils.h"

int count_bits_set(unsigned int n)
{
	int count = 0;
	while (n)
	{
		n &= (n - 1);
		count++;
	}
	return count;
}

int count_different_bits(unsigned int m, unsigned int n)
{
	unsigned int xor_result = m ^ n;
	return count_bits_set(xor_result);
}
