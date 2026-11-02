/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:28:50 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/02 12:28:54 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  a;
    size_t  b;

    a = ft_strlen(src);
    i = 0;
    while (i < size && dest[i] != '\0')
        i++;
    b = i;
    if (i == size)
        return (size + a);
    j = 0;
    while (src[j] && i < size -1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (b + a);
}
