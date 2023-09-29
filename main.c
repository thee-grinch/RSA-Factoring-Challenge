#include "factors.h"

int main(int argc, char *argv[])
{
	FILE *file;
	char line[256];
	
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		perror("Error opening th file");
		return (1);
	}
	while ((fgets(line, sizeof(line), file)) != NULL)
	{
		factorise(line);
	}
	fclose(file);
	(void)argc;
	return (0);
}
