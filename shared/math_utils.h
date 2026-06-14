#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <math.h>

/* Check if n is a prime number. Returns 1 if prime, 0 otherwise. */
int is_prime(int n);

/* Check if year is a leap year. Returns 1 if leap year, 0 otherwise. */
int is_leap_year(int year);

/* Compute the n-th Fibonacci number (1-indexed: fib(1)=1, fib(2)=1, ...). */
int fib(int n);

/*
 * Check if n is a "Lily Number" (variant narcissistic number).
 * A number is a Lily Number if the sum of products of all ways
 * to split it into two parts equals itself.
 * e.g. 655 = 6*55 + 65*5
 */
int is_lily_number(int n);

/* Return the number of days in the given month of a year. */
int days_in_month(int year, int month);

#endif /* MATH_UTILS_H */
