#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	str[10] = "abcdef";

	ft_memset(str, 'X', 3);
	printf("%s\n", str);

	ft_memset(str, 'A', 2);
	printf("%s\n", str);

	ft_memset(str, 'Z', 0);
	printf("%s\n", str);
	return (0);
}
