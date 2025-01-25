#include "tester_libft.h"

int	main()
{
	char	**res;
	int		i;

	res = ft_split("a,b", ',');
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
}
