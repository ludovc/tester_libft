#include <stdio.h>
#include <string.h>

int		main()
{
	char	*s = "hello world!";
	char	c = 'e';

	printf("%s\n", strchr(s, c));
}
