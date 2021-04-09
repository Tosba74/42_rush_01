/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:40:04 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/25 04:09:10 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;
	size_t	i;

	s = (char *)b;
	i = 0;
	while (i < len)
	{
		s[i] = (char)c;
		i++;
	}
	return ((void *)s);
}
