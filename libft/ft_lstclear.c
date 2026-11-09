/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:39:45 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/09 18:39:47 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;
    t_list  *next;

    if(!lst || !del)
        return ;
    temp = *lst;
    while(temp != NULL)
    {
        next = temp->next;
        ft_lstdelone(temp, del);
        temp = next;
    }
    *lst = NULL;
}