#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dest[5];
	size_t	ret;

	ret = ft_strlcpy(dest, "Ola mundo", 5);
	printf("dest: %s\n", dest);
	printf("retorno: %zu\n", ret);
	return (0);
}