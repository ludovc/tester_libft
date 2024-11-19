#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

void	ft_isalpha_test(char c)
{
	int		res1;
	int		res2;

	res1 = isalpha(c);
	res2 = ft_isalpha(c);
	printf("\n");
	printf("'%c'\n", c);
	printf("\t%d\n", res1);
	printf("\t%d\n", res2);
}

int	main()
{
	ft_isalpha_test('a');
	ft_isalpha_test('1');
	ft_isalpha_test('0');
}
