#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *result;

    result = ft_strjoin("Bom ", "Dia");
    printf("Resultado: %s\n", result);
    free(result);
    return (0);
}