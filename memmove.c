#include <string.h>
#include <stdio.h>

int		main()
{
	char	*a;
	char	*b;

	a = strdup("ciao");
	b = strdup("boh");
	memmove(a, b, 4);
	printf("%s\n", b);
}
