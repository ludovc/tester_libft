#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	printbytes(void *s, int n);

int		main()
{
	char	*s;

	s = strdup("ciao");
	ft_bzero(s, 2);
	//printf("%s\n", s);
	printbytes(s, 4);
	free(s);
	s = strdup("ciao");
	bzero(s, 2);
	//printf("%s\n", s);
	puts("");
	printbytes(s, 4);
}
