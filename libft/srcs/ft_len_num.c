/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 15:54:18 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/08 21:41:09 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_num(long n, int b)
{
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		n /= b;
		count++;
	}
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0 && b >= 1)
	{
		n /= b;
		count++;
	}
	return (count);
}
