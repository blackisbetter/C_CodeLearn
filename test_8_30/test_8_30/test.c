#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i=0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}