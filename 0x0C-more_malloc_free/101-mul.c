#include "main.h"
/**
 * _puts - function prints a string
 * followed by a new line
 * @str: pointer
 * Return: returns void
*/


void _puts(char *str)
{
int a = 0;
while (str[a])
{
	_putchar(str[a]);
	a++;
}

}

/**
 * _atoi - function convert a string to an int
 * @s: char type string
 * Return: returns integer converted
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int rtn = 0, fNum, i;

	for (fNum = 0; !(s[fNum] >= 48 && s[fNum] <= 57); fNum++)
	{
		if (s[fNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = fNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		rtn *= 10;
		rtn += (s[i] - 48);
	}

	return (sign * rtn);
}

/**
 * print_int - function prints an integer
 * @n: an int
 * Return: returns 0
 */

void print_int(unsigned long int n)
{

unsigned  long int div = 1, a, rtn;

for (a = 0; n / div > 9; a++, div *= 10)
;

for (; div >= 1; n %= div, div /= 10)
{
	rtn = n / div;
	_putchar('0' + rtn);
}

}

/**
 * main - function print the multiplication result
 * followed by a new line
 * @argc: an int
 * @argv: a list
 * Return: returns 0
 */

int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
	_puts("Error ");
	exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');

return (0);
}
