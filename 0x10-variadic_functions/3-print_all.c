#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_str - Function prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_float - Function prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_int - Function prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_char - Function prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_all - Function prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j = 0;
char *sept = "";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "c", print_char },
	{ "s", print_str },
	{ "f", print_float },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (*printType[j].type == format[i])
		{
			printf("%s", sept);
			printType[j].printer(list);
			sept = ", ";
			break;
		}
		j++;
	}
	i++;
}

printf("\n");
va_end(list);
}
