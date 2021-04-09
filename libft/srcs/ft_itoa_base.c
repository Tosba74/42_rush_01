/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:42:29 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/09 14:15:56 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive_itoa(long nb, int i, const char *base, char *result)
{
	unsigned int	b;

	b = (unsigned int)ft_check_base(base);
	result[i] = (char)base[nb % b];
	if (nb >= b)
		ft_recursive_itoa(nb / b, i - 1, base, result);
}

char	*ft_itoa_base(int n, const char *base)
{
	long			nb;
	long			b;
	int				len;
	char			*result;

	nb = (long)n;
	b = (long)ft_check_base(base);
	len = ft_len_num(nb, b);
	result = NULL;
	if (b == 0 || b == 1)
		return (SUCCESS);
	if (ft_norm_all((void *)&result, len + 1, (sizeof(char))))
		return (NULL);
	if (nb == -2147483648)
	{
		result[--len] = (char)base[n % b] - 1;
		nb /= b;
	}
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	ft_recursive_itoa(nb, len - 1, base, result);
	return (result);
}
