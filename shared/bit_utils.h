#ifndef BIT_UTILS_H
#define BIT_UTILS_H

/*
 * Count the number of 1-bits in the binary representation of n.
 * Uses the n &= (n-1) trick to drop one set bit per iteration.
 */
int count_bits_set(unsigned int n);

/*
 * Count how many bit positions differ between m and n.
 * XORs the values, then counts 1-bits in the result.
 */
int count_different_bits(unsigned int m, unsigned int n);

#endif /* BIT_UTILS_H */
