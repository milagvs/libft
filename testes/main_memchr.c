#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "Ola mundo";
	char	*res;

	res = ft_memchr(str, 'm', 9);
	printf("%s\n", res);
	return (0);
}