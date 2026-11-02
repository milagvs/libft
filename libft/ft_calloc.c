/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:26:19 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/02 18:26:24 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    unsigned char   *bytes;
    void    *ptr;
    size_t  i;

    i = 0;
    if (nmemb != 0 && size > (size_t)-1 / nmemb)
	    return (NULL);
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
	    return (NULL);
    bytes = (unsigned char *)ptr;
    while (i < nmemb * size)
    {
	    bytes[i] = 0;
	    i++;
    }
    return (ptr);
}