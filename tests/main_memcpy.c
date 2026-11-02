#include <stdio.h>
#include "libft.h"

int main(void)
{
    char src[] = "Ola 42 Lisboa!";
    char dest[20];

    // Usar a tua função para copiar a string 'src' para 'dest'
    ft_memcpy(dest, src, 15);

    // Imprimir o resultado
    printf("Texto copiado: %s\n", dest);

    return (0);
}