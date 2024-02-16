#include "main.h"

/**
* _isdigit - A function that checks for a digit in the range (0 and 9).
* @c: An input integer
* Return: 1 if c is a digit or 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0')
	{
		if (c <= '9')
			return (1);
	}
	return (0);
}
