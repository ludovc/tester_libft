#include "../libft.h"

int	main()
{
	ft_printf("%d %d\n", atoi("a"), ft_atoi("a"));
	ft_printf("%d %d\n", atoi("0"), ft_atoi("0"));
	ft_printf("%d %d\n", atoi("2147483647"), ft_atoi("2147483647"));
	ft_printf("%d %d\n", atoi("2147483648"), ft_atoi("2147483648"));
	ft_printf("%d %d\n", atoi("21474836470"), ft_atoi("21474836470"));
	ft_printf("%d %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	ft_printf("%d %d\n", atoi("-2147483649"), ft_atoi("-2147483649"));
	ft_printf("%d %d\n", atoi("-21474836480"), ft_atoi("-21474836480"));
}
