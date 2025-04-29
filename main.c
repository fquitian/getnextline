#include <stdio.h>
#include "get_next_line.h"

int	main()
{
	char	*linha;
	int	fd;

	fd = open ("README_test", 1024);
	while (1){
		linha = get_next_line(fd);
		if (!linha){
			free(linha);
			break;}
		printf("%s", linha);
		free(linha);
	}
	return (0);
}
