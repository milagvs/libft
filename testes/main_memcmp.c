#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_memcmp("Ola", "Ola", 3));
	printf("%d\n", ft_memcmp("Ola", "Oma", 3));
	printf("%d\n", ft_memcmp("Ola", "Oma", 1));
	printf("%d\n", ft_memcmp("Ola", "Oma", 0));
	return (0);
}