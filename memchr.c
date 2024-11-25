#include "tester_libft.h"

/*
void *ft_memchr2(const void *s, int c, size_t n)
{
        size_t i;
        unsigned char t;        i = 0;
        t = (unsigned char)c;        

		if (n == 0)
			return (NULL);
		while(((unsigned char *)s)[i] != '\0' && i < n - 1)
        {
                if(((unsigned char *)s)[i] == t)
                {
                        return((char *)&s[i]);
                }
                i++;
        }
        if(((const char *)s)[i] == t)
                return((char *)&s[i]);
        return(NULL);
}
*/

int		main()
{
	char	mem[] = {0, 1, 2, 3, 4, 5};

	printf("%p\n", ft_memchr(mem, 0, 0));
}
