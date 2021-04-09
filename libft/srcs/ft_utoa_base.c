/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:42:29 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/12 17:00:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_nbr(unsigned int n, unsigned int b)
{
	int	count;

	count = 0;
	b = 10;
	while (n >= b)
	{
		n /= b;
		count++;
	}
	count++;
	return (count);
}

static void	ft_recursive_utoa(unsigned int nb, int i, const char *base,
char *result)
{
	unsigned int	b;

	b = (unsigned int)ft_check_base(base);
	if (b == 0 || b == 1)
		return ;
	result[i] = (char)base[nb % b];
	if (nb >= b)
		ft_recursive_utoa(nb / b, i - 1, base, result);
}

char	*ft_utoa_base(unsigned int n, const char *base)
{
	unsigned long long	nb;
	unsigned int		b;
	size_t				len;
	char				*result;

	nb = (unsigned long long)n;
	b = (unsigned int)ft_check_base(base);
	len = ft_len_nbr(nb, b);
	result = NULL;
	if (ft_norm_all((void *)&result, len + 1, sizeof(char)))
		return (NULL);
	result[len] = '\0';
	ft_recursive_utoa(nb, len - 1, base, result);
	return (result);
}
