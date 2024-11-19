#include <stdio.h>

void	printbytes(void *s, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		printf("%d\n", ((unsigned char *)s)[i]);
		i++;
	}
}

