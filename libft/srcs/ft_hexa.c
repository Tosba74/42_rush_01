/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 13:53:05 by bmangin           #+#    #+#             */
/*   Updated: 2021/01/11 15:13:39 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_add_0x(char *str, const char *base)
{
	str[0] = '0';
	if (base[10] == 'A')
		str[1] = 'X';
	else
		str[1] = 'x';
	return (str);
}

void	ft_recursive_itoa(long nb, int i, const char *base, char *result)
{
	int	b;

	b = ft_check_base(base);
	result[i] = (char)base[nb % b];
	if (nb >= b)
		ft_recursive_itoa(nb / b, i - 1, base, result);
}

char	*ft_hexa(int n, const char *base)
{
	int		b;
	int		len;
	long	nb;
	char	*result;

	b = ft_check_base(base);
	len = ft_len_num(n, b) + 2;
	nb = (long)n;
	result = NULL;
	if (ft_norm_all((void *)&result, len + 1, sizeof(char)))
		return (NULL);
	if (b == 0 || b == 1)
		return (SUCCESS);
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	result[len] = '\0';
	ft_recursive_itoa(nb, len - 3, base, result);
	result = ft_add_0x(result, base);
	return (result);
}
