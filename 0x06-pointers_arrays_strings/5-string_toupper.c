#include "main.h"
/**
 * *string_toupper - Function changes all lowercase letters
 * of a string to uppercase
 *
 * @str: The string to return
 * Return: Returns a string
 */
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 97 && str[j] <= 122)
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
