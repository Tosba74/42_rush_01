/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:30:31 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 01:07:21 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int n, char *base)
{
	long	nb;
	int		b;

	nb = n;
	b = ft_check_base(base);
	if (b == 0 || b == 1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= b)
		ft_putnbr_base(nb / b, base);
	ft_putchar(base[nb % b]);
}
