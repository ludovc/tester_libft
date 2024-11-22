#include "tester_libft.h"

int		main()
{
	char	destinazione[50] = "abc";
	char	sorgente[1024] = "defz";

	size_t res = strlcat(destinazione, sorgente, 2);
	if (res > sizeof(destinazione))
		printf("problem\n");
	//printf("%zu\n", sizeof(destinazione));
	printf("%zu\n", res);
	printf("%s\n", destinazione);
}
