#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	print_lst_str(void *ptr)
{
	char	*str;

	str = (char *)ptr;
	printf("%s\n", str);
}

int	main()
{
	t_list	*lst;

	ft_lstadd_back(&lst, ft_lstnew(strdup("str1")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("str2")));
	ft_lstiter(lst, print_lst_str);
}
