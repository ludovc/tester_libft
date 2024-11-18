#include <string.h>
#include <stdio.h>

int		main()
{
	char	*s;

	s = strdup("ciao");
	memset(s, 'a', 2);
	printf("%s\n", s);
}
