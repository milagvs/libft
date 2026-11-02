
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "banana";
	char	*result;

	result = ft_strchr(str, 'n');
	printf("Resultado 1: %s\n", result);

	result = ft_strchr(str, 'z');
	printf("Resultado 2: %s\n", result);

	result = ft_strchr(str, '\0');
	printf("Resultado 3: %s\n", result);

	return (0);
}
