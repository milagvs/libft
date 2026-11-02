/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:52:26 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/02 16:52:28 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a;
    const unsigned char *b;
    size_t				i;

    a = (const unsigned char *)s1;
    b = (const unsigned char *)s2;
    i = 0;

    while(i < n)
    {
        if (a[i] != b[i])
            return(a[i] - b[i]);
        i++;
    }
    return (0);
}
