
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("Teste 1: %d\n", ft_strncmp("casa", "casa", 4));
	printf("Teste 2: %d\n", ft_strncmp("casa", "cama", 4));
	printf("Teste 3: %d\n", ft_strncmp("ola", "ol", 3));
	printf("Teste 4: %d\n", ft_strncmp("casa", "mesa", 0));
	printf("Teste 5: %d\n", ft_strncmp("abc", "abd", 2));
	printf("Teste 6: %d\n", ft_strncmp("\200", "\177", 1));
	return (0);
}
