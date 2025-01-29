#include "tester_libft.h"

int	main()
{
	char	*line = "012";
	char	*new;

	new = strdup(&line[3]);
	printf("%s\n", new);
	free(new);
}
