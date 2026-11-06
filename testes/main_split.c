#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    **result;
    int     i;

    result = ft_split("ola,,mundo,,42", ',');
    i = 0;
    while (result && result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}