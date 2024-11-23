#include "tester_libft.h"

int		main()
{
	char	*dest;
	char	*src;

	src = strdup("abc");
	dest = strdup("def");
	(void)src;
	memmove(dest + 1, dest, 2);
	printf("%s\n", dest);
}
