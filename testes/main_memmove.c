#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "Hello";

	ft_memmove(str + 1, str, 4);

	printf("%s\n", str);
	return (0);
}
