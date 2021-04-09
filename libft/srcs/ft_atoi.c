/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:58:11 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/26 11:01:49 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_num(long num, int neg, int len)
{
	if (len >= 19 && neg == 1)
		return (-1);
	else if (len >= 20 && neg == -1)
		return (SUCCESS);
	else
		return (num * neg);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		neg;
	int		len;

	num = 0;
	neg = 1;
	len = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str++ - '0');
		len++;
	}
	return (ft_check_num(num, neg, len));
}
