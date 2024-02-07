#include <unistd.h>

int _putchar(char c);

/**
 * print_number - Prints an integer using recursion
 * @n: The integer to print
 *
 * Description: Recursively divides the number to print each digit
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-'); /* Handle negative numbers */
		if (n < -9)
			print_number(-(n / 10));
		_putchar('0' - (n % 10));
	}
	else
	{
		if (n > 9)
			print_number(n / 10);
		_putchar('0' + (n % 10));
	}
}

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
