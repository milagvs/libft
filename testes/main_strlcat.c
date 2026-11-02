#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dest[20] = "Bom ";
	size_t	ret;

	ret = ft_strlcat(dest, "dia", 20);
	printf("dest: %s\n", dest);
	printf("retorno: %zu\n", ret);
	return (0);
}

#include <stdio.h>
#include "libft.h"

/*int	main(void)
{
	char	dest[10] = "Bom dia";
	size_t	ret;

	ret = ft_strlcat(dest, "!", 4);
	printf("dest: %s\n", dest);
	printf("retorno: %zu\n", ret);
	return (0);
}*/