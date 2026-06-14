#include "math_utils.h"

int is_prime(int n)
{
	int j = 0;
	if (n < 2)
		return 0;
	for (j = 2; j <= (int)sqrt((double)n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	return 0;
}

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int is_lily_number(int n)
{
	double sum = 0;
	int i = 0;
	int digits = 0;
	int tmp = n;

	/* Count number of digits */
	while (tmp > 0)
	{
		digits++;
		tmp /= 10;
	}

	for (i = 1; i < digits; i++)
	{
		int divisor = (int)pow(10, i);
		int left = n / divisor;
		int right = n % divisor;
		sum += (double)left * right;
	}

	if ((int)sum == n)
		return 1;
	return 0;
}

int days_in_month(int year, int month)
{
	switch (month)
	{
	case 1: case 3: case 5: case 7:
	case 8: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		return is_leap_year(year) ? 29 : 28;
	default:
		return -1;
	}
}
