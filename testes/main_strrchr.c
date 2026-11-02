
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "banana";
	char	*result;

	result = ft_strrchr(str, 'a');
	printf("Resultado 1: %s\n", result);

	result = ft_strrchr(str, 'n');
	printf("Resultado 2: %s\n", result);

	result = ft_strrchr(str, 'z');
	printf("Resultado 3: %s\n", result);

	result = ft_strrchr(str, '\0');
	printf("Resultado 4: %s\n", result);

	return (0);
}
