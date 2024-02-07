#include "main.h"
/**
 * leet - Function encodes a string into 1337
 * @c: String
 * Return: Returns an encoded string
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int j;

	while (*c)
	{
		for (j = 0; j < sizeof(key) / sizeof(char); j++)
		{
			/*Lower case letters and apper case letters have a difference of 32*/
			if (*c == key[j] || *c == key[j] + 32)
			{
				*c = 48 + value[j];
			}
		}
		c++;
	}

	return (cp);

}
