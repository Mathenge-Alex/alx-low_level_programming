#include "main.h"
#include <stdio.h>
/**
* infinite_add - Function adds two numbers/ integers
* @n1: The fisrt number
* @n2: The second number
* @r: Buffer used to store the result
* @size_r: Buffer size
* Return: Returns results, or 0 if results can't be stored
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
		int c1 = 0, c2 = 0, total, wide, numb1, numb2, modul = 0;

		while (n1[c1] != '\0')
				c1++;
		while (n2[c2] != '\0')
				c2++;
		if (c1 >= c2)
				wide = c1;
		else
				wide = c2;
		if (size_r <= wide + 1)
				return (0);
		r[wide + 1] = '\0';
		c1--, c2--, size_r--;
		numb1 = n1[c1] - 48, numb2 = n2[c2] - 48;
		while (wide >= 0)
		{
				total = numb1 + numb2 + modul;
				if (total >= 10)
						modul = total / 10;
				else
						modul = 0;
				if (total > 0)
						r[wide] = (total % 10) + 48;
				else
						r[wide] = '0';
				if (c1 > 0)
						c1--, numb1 = *(n1 + c1) - 48;
				else
						numb1 = 0;
				if (c2 > 0)
						c2--, numb2 = n2[c2] - 48;
				else
						numb2 = 0;
				wide--, size_r--;
		}
		if (*(r) == '0')
				return (r + 1);
		else
				return (r);
}
