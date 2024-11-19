#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);

void	printbytes(void *s)
{
	int		i;

	i = 0;
	while (((unsigned char *)s)[i])
	{
		printf("%d\n", ((unsigned char *)s)[i]);
		i++;
	}
}

void	memset_test(int c)
{
	char	*s;

	s = strdup("ciao");
	ft_memset(s, c, 2);
	//printf("%s\n", s);
	printbytes(s);
	free(s);
	s = strdup("ciao");
	memset(s, c, 2);
	//printf("%s\n", s);
	puts("");
	printbytes(s);
}

int		main()
{
	memset_test(-100);
}
