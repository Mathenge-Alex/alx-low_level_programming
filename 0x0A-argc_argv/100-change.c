#include <stdio.h>
#include <stdlib.h>
/**
 *main - function prints the min number of coins
 *to make change for a certain amount of money.
 *@argc: the number of command line args.
 *@argv: a pointer to the array of command line args.
 *Return: returns 0 on success, and others on failure.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int j, mincents = 0, cash = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (j = 0; j < 5; j++)
	{
		if (cash >= cents[j])
		{
			mincents += cash / cents[j];
			cash = cash % cents[j];
			if (cash % cents[j] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", mincents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
