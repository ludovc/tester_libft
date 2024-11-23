#include "tester_libft.h"

void	memcpy_test3()
{
	char	*s;

	s = strdup("abcd");
	memcpy(s + 1, s, 3);
	printf("%s\n", s);
	free(s);
	s = strdup("abcd");
}

void	memcpy_test2()
{
	char *dest;
	char *src;

	src = strdup("abc");
	dest = src + 1;
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	memcpy(dest, src, 2);
	printf("\n%s\n", dest);
}

void	memcpy_test()
{
	char	dest[100] = "zzzzzzzz";
	char	dest2[100] = "zzzzzzzz";

	puts(dest);
	ft_memcpy(dest, "ciao", 3);
	puts(dest);
	memcpy(dest2, "ciao", 3);
	puts(dest2);
}

int		main()
{
	memcpy_test();
}
