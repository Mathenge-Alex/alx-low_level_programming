#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - Function counts the number of words in a string
 * @s: string
 * Return: Returns number of words (integer)
 */
int wrdcnt(char *s)
{
	int j, n = 0;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == ' ')
		{
			if (s[j + 1] != ' ' && s[j + 1] != '\0')
				n++;
		}
		else if (j == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - Function splits a string into words
 * @str: string
 * Return: Returns pointer to a strings array
 */
char **strtow(char *str)
{
	int a, b, c, m, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			w[wc] = (char *)malloc(b * sizeof(char));
			b--;
			if (w[wc] == NULL)
			{
				for (c = 0; c < wc; c++)
					free(w[c]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (m = 0; m < b; m++)
				w[wc][m] = str[a + m];
			w[wc][m] = '\0';
			wc++;
			a += b;
		}
		else
			a++;
	}
	return (w);
}
