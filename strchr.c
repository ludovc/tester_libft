#include "tester_libft.h"

int		main()
{
	char	*s = "hello world!";
	char	c = '\0';
	char	*res;

	res = strchr(s, c);
	printf("%s\n", res);
}
