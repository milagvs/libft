/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <mibarros@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:51:42 by mibarros          #+#    #+#             */
/*   Updated: 2026/10/29 14:51:42 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *d;
    const unsigned char *s;

    if (!dest && !src)
        return (NULL);
    
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    // Se o destino está antes da origem, copiamos normalmente (frente para trás)
    if (d < s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dest);
}
