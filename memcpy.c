#include <string.h>
#include <stdio.h>

/*
int		main()
{
	char	*s;

	s = strdup("abcd");
	memcpy(s + 1, s, 3);
	printf("%s\n", s);
	free(s);
	s = strdup("abcd");
}
*/

int		main()
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
