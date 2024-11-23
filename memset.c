#include "tester_libft.h"

void	memset_test(int c)
{
	char	*s;

	s = strdup("ciao");
	ft_memset(s, c, 2);
	//printf("%s\n", s);
	printbytes(s, 4);
	free(s);
	s = strdup("ciao");
	memset(s, c, 2);
	//printf("%s\n", s);
	puts("");
	printbytes(s, 4);
}

int		main()
{
	memset_test(0);
}
