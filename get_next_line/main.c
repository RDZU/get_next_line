
#include "get_next_line.h"
# include <stdio.h>
int main(int argc, char **argv)
{
	int fd;
	char *line;


	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		// if (fd == -1)
		// {
		// 	printf("Error\n");
		// 	return (1);
		// }
		line = get_next_line(fd);
		while (line)
		{
			printf("%s", line);
			free(line);
			line = get_next_line(fd);
		}
		free(line);
		close(fd);
	}
	else
	{
		printf("Error al recibir argumento en el main\n");
		return (1);
	}
	system("leaks -q a.out");
	
}