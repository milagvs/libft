/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:23:26 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/06 09:23:30 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;

    if(!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1);
    while (start < ft_strlen(s1) && ft_strchr(set, s1[start]) != NULL)
        start++;
    while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
        end--;
    return (ft_substr(s1, start, end - start));
}