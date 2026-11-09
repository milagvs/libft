/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:32:38 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/09 17:32:41 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_lstsize(t_list *lst)
{
    unsigned int    count;
    t_list          *current;

    count = 0;
    current = lst;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return (count);
}
