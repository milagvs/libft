```c
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Teste 1: %d\n", ft_atoi("42"));
	printf("Teste 2: %d\n", ft_atoi("-123"));
	printf("Teste 3: %d\n", ft_atoi("+87"));
	printf("Teste 4: %d\n", ft_atoi("   25"));
	printf("Teste 5: %d\n", ft_atoi("\t\n  56"));
	printf("Teste 6: %d\n", ft_atoi("123abc"));
	printf("Teste 7: %d\n", ft_atoi("abc123"));
	printf("Teste 8: %d\n", ft_atoi("   -42"));
	return (0);
}