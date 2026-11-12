/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:34:44 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/12 17:24:07 by lucerque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static void	cpystr(char *str, long num, size_t i)
{
	if (num == 0)
	{
		str[i] = '0';
		return ;
	}
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		sign;
	long	num;
	size_t	len;
	char	*str;

	num = n;
	sign = (num < 0);
	if (num < 0)
		num = -num;
	len = count_digits(num) + sign;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	cpystr(str, num, len - 1);
	if (sign)
		str[0] = '-';
	return (str);
}
