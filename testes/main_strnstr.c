#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*res;

	res = ft_strnstr("Ola mundo", "mun", 9);
	printf("%s\n", res);
	return (0);
}