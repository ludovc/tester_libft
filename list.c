#include "../libft.h"
#include <stdio.h>

int	*new_int(int n)
{
	int		*res;

	res = malloc(sizeof(int));
	*res = n;
	return (res);
}

void	print_lst_int(void *ptr)
{
	int		*n;

	n = (int *)ptr;
	printf("%d\n", *n);
}

int	main()
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(new_int(1)));
	ft_lstadd_back(&lst, ft_lstnew(new_int(2)));
	ft_lstiter(lst, print_lst_int);
}
