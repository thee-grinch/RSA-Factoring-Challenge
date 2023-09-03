#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - entry point
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always zero
 */
int main (int argc, char *argv[])
{
	FILE *fp;
	(void)argc;
	char line[100];
	long int num, quot, i, sq;

	fp = fopen(argv[1], "r");
	if (fp == NULL)
		return -1;
	while (fgets(line, sizeof(line), fp) != NULL)
	{
		num = atol(line);
		sq = sqrt((double)num);
		if (num % 2 == 0)
		{
			quot = num / 2;
			printf("%ld=%ld * 2\n", num, quot);
			continue;
		}
		for (i = 3; i <= sq; i += 2)
		{
			if (num % i == 0)
			{
				quot = num / i;
				printf("%ld = %ld * %ld\n", num, i,  quot);
				break;
			}
		}


	}
	fclose(fp);
	return (0);
}
