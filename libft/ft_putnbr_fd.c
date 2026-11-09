/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:11:52 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/09 12:11:55 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_print_number(long nb, int fd)
{
    char c;

    if(nb >= 10)
        ft_print_number(nb / 10, fd);
    c = nb % 10 + '0';
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;

    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    ft_print_number(nb, fd);
}