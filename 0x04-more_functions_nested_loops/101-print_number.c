#include "main.h"

/**
* print_number - Function prints an integer provided as argument
* @n: The integer to be printed
* Return: Returns nothing
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
