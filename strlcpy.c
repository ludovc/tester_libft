#include "tester_libft.h"

int		main()
{
	//char	*sorgente;
	char	*destinazione;

	//sorgente = strdup("ciao");
	destinazione = strdup("rrrrrr");
	size_t temp = strlcpy(destinazione, "lorem ipsum", 0);
	printf("%zu\n", temp);
	puts(destinazione);
}
