#include "string_utils.h"

int my_strlen(const char *str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

char *my_strcpy(char *dest, const char *src)
{
	char *ret = dest;
	assert(dest);
	assert(src);
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

void reverse_string(char arr[], int left, int right)
{
	if (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse_string(arr, left + 1, right - 1);
	}
}
