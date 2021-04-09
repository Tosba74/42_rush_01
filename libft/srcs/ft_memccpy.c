/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:43:29 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/08 23:06:02 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ssrc;
	unsigned char		*sdst;

	i = 0;
	ssrc = (const unsigned char *)src;
	sdst = (unsigned char *)dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (ssrc == sdst)
		return (dst);
	while (i < n)
	{
		sdst[i] = ssrc[i];
		if (ssrc[i] == (unsigned char)c)
			return ((void *)sdst + i + 1);
		i++;
	}
	return (NULL);
}
