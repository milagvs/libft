/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:34:44 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/06 14:34:48 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    int     i;
    int     sign;
    long    num;
    size_t  len;
    char    *str;

    num = n;
    sign = (num < 0);
    if (num < 0)
        num = -num;
    len = sign + 1;
    while (num > 0)
    {
        num = num / 10;
        len++;
    }
    str = malloc(len);
    if (!str)
        return (NULL);
    str[len - 1] = '\0';
    num = n;
    if (num < 0)
        num = -num;
    i = len - 2;
    while (num > 0)
    {
        str[i] = (num % 10) + '0';
        num = num / 10;
        i--;
    }
    if (n == 0)
        str[0] = '0';
    if (sign)
        str[0] = '-';
    return (str);
}
