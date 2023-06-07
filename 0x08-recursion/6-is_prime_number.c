#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible- checks divisibility of a number
 * num: is one to be checked
 * div: is the divisor
 *
 * Return: 0 if divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num/2)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number- checks prime number
 *
 * n: number checked 
 * Return: 0 if number not prime
 */
int is_prime_number(int n)
{
	int div = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
