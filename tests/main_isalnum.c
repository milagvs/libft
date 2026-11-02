#include <stdio.h>

int ft_isalnum(int c);

int main(void)
{
    printf("%d\n", ft_isalnum(' '));
    printf("%d\n", ft_isalnum('?'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('2'));
    printf("%d\n", ft_isalnum('b'));
}