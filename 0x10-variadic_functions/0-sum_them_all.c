#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  function sum all provided arguments
 * @n: an integer - number of the undefined arguments
 * Return: Returns sum of args
 * 0 is returned when an error is encountered
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int j, sum = 0;

va_start(list, n);
if (n != 0)
	for (j = 0; j < n; sum += va_arg(list, unsigned int), j++)
	;
va_end(list);

return (sum);
}
