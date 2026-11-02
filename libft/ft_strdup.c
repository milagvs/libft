/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:53:54 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/02 18:53:56 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    size_t  i;
    size_t  len;
    char    *copia;

    i = 0;
    len = ft_strlen(s);
    copia = malloc(len + 1);
    if (copia == NULL)
	    return (NULL);
    while (i < len)
    {
	    copia[i] = s[i];
	    i++;
    }
    copia[len] = '\0';
    return (copia);
}