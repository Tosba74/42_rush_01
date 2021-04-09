/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:42:29 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/12 17:05:41 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_recursive_utoa(unsigned long long nb, int i, const char *base,
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

char	*ft_ulltoa_base(unsigned long long ull, char *base)
{
	char				*result;
	unsigned long long	save;
	int					i;
	int					b;

	result = NULL;
	save = ull;
	i = 0;
	b = ft_check_base(base);
	if (save == 0 || b == 0 || b == 1)
		return (ft_strdup("0"));
	while (ull != 0)
	{
		ull /= b;
		i++;
	}
	if (ft_norm_all((void *)&result, sizeof(char), (i + 1)))
		return (NULL);
	ft_recursive_utoa(save, i - 1, base, result);
	return (result);
}
