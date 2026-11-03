
#include "libft.h"
#include <stdio.h>
int	main(void)
{
	char	*result;

	result = ft_substr("42Lisboa", 2, 4);
	printf("Teste 1: %s\n", result);
	free(result);

	result = ft_substr("42Lisboa", 10, 4);
	printf("Teste 2: %s\n", result);
	free(result);

	result = ft_substr("42Lisboa", 5, 20);
	printf("Teste 3: %s\n", result);
	free(result);

	result = ft_substr("42Lisboa", 0, 0);
	printf("Teste 4: [%s]\n", result);
	free(result);

	return (0);
}
