/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:00:32 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/24 16:35:27 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	if (dstsize == 0)
		return (i + ft_strlen(src));
	while (src[j] && dstsize > j + i + 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
