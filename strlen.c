#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int		main()
{
	char	*s = "ciao";

	printf("%lu\n", strlen(s));
	printf("%lu\n", ft_strlen(s));
}
