/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 01:05:07 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/12 01:06:14 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_base(const char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (SUCCESS);
		while (base[j])
		{
			if (base[i] == base[j])
				return (SUCCESS);
			j++;
		}
		i++;
	}
	return (i);
}
