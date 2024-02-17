#include <stdio.h>
#include <math.h>

/**
* largest_prime_factor - Function finds the largest prime factor
* of a given long number
* @n: the long number
*
* Return: returns the largest prime factor of the number n
*/
long largest_prime_factor(long n)
{
	long p_factor;

	while (n % 2 == 0)
	{
		p_factor = 2;
		n /= 2;
	}

	for (p_factor = 3; p_factor <= sqrt(n); p_factor += 2)
	{
		while (n % p_factor == 0)
		{
			n /= p_factor;
		}
	}

	if (n > 2)
		return (n);
	else
		return (p_factor);
}

/**
* main - Entry function to check the code
*
* Return: Returns always 0.
*/

int main(void)
{
	long n = 612852475143;

	long largest_factor = largest_prime_factor(n);

	printf("%ld\n", largest_factor);

	return (0);
}
