
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("%d\n", ft_isascii(65));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(127));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(-1));
	return (0);
}
