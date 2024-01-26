#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Function finds length of a given string
 * @s: a string
 * Return: Returns an integer
 */


int _strlen(char *s)
{
int sizing = 0;
for (; s[sizing] != '\0'; sizing++)
;
return (sizing);
}

/**
 * *argstostr - Function description
 * @ac: integer
 * @av: vector arguments
 * Return: Returns a string
 */

char *argstostr(int ac, char **av)
{
int j = 0, nc = 0, k = 0, dev = 0;
char *s;

if (ac == 0 || av == NULL)
	return (NULL);

for (; j < ac; j++, nc++)
	nc += _strlen(av[j]);

s = malloc(sizeof(char) * nc + 1);
if (s == 0)
	return (NULL);

for (j = 0; j < ac; j++)
{
	for (k = 0; av[j][k] != '\0'; k++, dev++)
		s[dev] = av[j][k];

	s[dev] = '\n';
	dev++;
}
s[dev] = '\0';

return (s);
}
