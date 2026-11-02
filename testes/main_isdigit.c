#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("%d\n", ft_isdigit('m'));
	printf("%d\n", ft_isdigit('7'));
	printf("%d\n", ft_isdigit('A'));
	return (0);
}
