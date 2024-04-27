#include "get_next_line_bonus.h"
# include <stdio.h>
int main(void)
{
	int fd, fd2, fd3;
	char *line;

	fd = open("text.txt", O_RDONLY);
	fd2 = open("long.txdt", O_RDONLY);
	fd3 = open("text3.txtr", O_RDONLY);

	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	line = get_next_line(fd2);
	printf("%s", line);
	free(line);
	line = get_next_line(fd3);
	printf("%s", line);
	free(line);

	close(fd);
	close(fd2);
	close(fd3);
    system("leaks -q a.out");
	return (0);
}