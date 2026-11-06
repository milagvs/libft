#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*res;

	res = ft_strtrim("##Casa##", "#");
	printf("[%s]\n", res);
	free(res);
	return (0);
}