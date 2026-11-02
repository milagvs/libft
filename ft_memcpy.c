/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <mibarros@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:50:40 by mibarros          #+#    #+#             */
/*   Updated: 2026/10/29 10:50:40 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *s;
    unsigned char   *d;
    size_t  i;

    i = 0;
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    if (!dest || !src)
        return (NULL);
    while (i < n)
    {
        d[i] = s [i];
        i++;
    }
    return(dest);
}