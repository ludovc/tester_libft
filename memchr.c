#include "tester_libft.h"

/*
void *ft_memchr2(const void *s, int c, size_t n)
{
        size_t i;
        unsigned char t;
		i = 0;
        t = (unsigned char)c;        

		if (n == 0)
			return (NULL);
		while(((unsigned char *)s)[i] != '\0' && i < n)
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

/*
void	*ft_memchr2()
{
	void	*mem;

	mem = malloc(1);
	mem = NULL;
	return (&mem);
	//(void)mem;
	//return (NULL);
}
*/

int		main()
{
	char	mem[] = {0, 1, 2, 3, 4, 5};
	char	*res;

	res = memchr(mem, 3, sizeof(mem));
	printbytes(res, 3);
}
