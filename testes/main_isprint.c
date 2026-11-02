
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("%d\n", ft_isprint(31));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(65));
	printf("%d\n", ft_isprint(126));
	printf("%d\n", ft_isprint(127));
	return (0);
}
