#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	*arr;

	arr = ft_calloc(3, sizeof(int));
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	free(arr);
	return (0);
}
