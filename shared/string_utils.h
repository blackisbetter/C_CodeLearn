#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <assert.h>

/* Compute string length (reimplementation of strlen). */
int my_strlen(const char *str);

/* Copy string from src to dest (reimplementation of strcpy). Returns dest. */
char *my_strcpy(char *dest, const char *src);

/* Reverse a string in-place between indices left and right. */
void reverse_string(char arr[], int left, int right);

#endif /* STRING_UTILS_H */
