#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <stdio.h>

/*
 * Binary search for key k in a sorted integer array.
 * Returns the index if found, or -1 if not found.
 */
int binary_search(int arr[], int sz, int k);

/* Print an integer array with elements separated by spaces. */
void print_int_array(int arr[], int sz);

/* Swap two integers via pointers. */
void swap_int(int *a, int *b);

/*
 * Bubble sort an integer array in ascending order.
 */
void bubble_sort(int arr[], int sz);

#endif /* ARRAY_UTILS_H */
