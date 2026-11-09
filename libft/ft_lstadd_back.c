/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:06:59 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/09 18:07:01 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (new == NULL)
        return ;
    if (lst == NULL)
        return ;
    last = ft_lstlast(*lst);
    if(last == NULL)
        *lst = new;
    else
        last->next = new;
}