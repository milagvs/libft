/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:01:42 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/03 12:05:14 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *ptr;

    j = 0;
    i = ft_strlen(s);
    if (start >= i)
    {
        ptr = malloc(1);
        if (ptr == NULL)
            return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }
    if (len > i - start)
        len = i - start;
    ptr = malloc(len + 1);
    if (ptr == NULL)
        return (NULL);
    i = start;
    while (i < start + len)
    {
        ptr[j] = s[i];
        i++;
        j++;
    }
    ptr[j] = '\0';
    return (ptr);
}