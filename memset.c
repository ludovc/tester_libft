#include "tester_libft.h"

void	memset_test(int c, int n)
{
	void	*mem;
	void	*mem2;

	mem = malloc(15);
	memset(mem, 'j', 15);
	ft_memset(mem, c, n);
	mem2 = malloc(15);
	memset(mem2, 'j', 15);
	memset(mem2, c, n);
	if (memcmp(mem, mem2, 15) == 0)
	{
		printf("ok\n");
	}
	else
	{
		printf("ko\n");
		printf("\n");
		printbytes(mem, 15);
		printf("\n");
		printbytes(mem2, 15);
	}
}

int		main()
{
	memset_test('c', 5);
	memset_test('c', 14);
	memset_test('\n', 6);
	memset_test('\0', 1);
	memset_test('c' + 256, 5);
}
