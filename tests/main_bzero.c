#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	text[] = "ABCD";

	printf("Antes: %s\n", text);
	ft_bzero(text, 3);
	printf("Depois: %s\n", text);
	printf("Bytes: %d %d %d %d\n",
		(unsigned char)text[0],
		(unsigned char)text[1],
		(unsigned char)text[2],
		(unsigned char)text[3]);
	return (0);
}
