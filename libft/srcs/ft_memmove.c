/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:40:31 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/25 04:07:25 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*ssrc;
	unsigned char		*sdst;

	i = 0;
	ssrc = (const unsigned char *)src;
	sdst = (unsigned char *)dst;
	if (ssrc == sdst)
		return (dst);
	if (ssrc <= sdst)
		while (*ssrc && ++i <= len)
			sdst[len - i] = ssrc[len - i];
	else if (ssrc > sdst)
	{
		i -= 1;
		while (++i < len)
			sdst[i] = ssrc[i];
	}
	return ((void *)sdst);
}
