#include "factors.h"

int factorise(char *s)
{
	int num = atoi(s);
	int i = 3;

	if (num % 2 == 0)
		printf("%d=%d*%d\n", num, 2, num / 2);
	else
	{
		while ((num % i) != 0)
			i += 2;
		printf("%d=%d*%d", num, num / i, i);
	}
	return (0);
}

