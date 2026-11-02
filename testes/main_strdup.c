#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*original;
	char	*copia;

	original = "ola mundo";
	copia = ft_strdup(original);
	printf("Original: %s\n", original);
	printf("Copia: %s\n", copia);
	free(copia);
	return (0);
}