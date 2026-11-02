/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <mibarros@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:04:05 by mibarros          #+#    #+#             */
/*   Updated: 2026/10/26 18:04:05 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    unsigned char	*ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}