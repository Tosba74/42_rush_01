/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:19:25 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/07 23:52:52 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lendst;

	i = 0;
	lendst = ft_strlen(dst);
	while (src[i] && i < n)
		dst[lendst++] = src[i++];
	dst[lendst] = '\0';
	return (dst);
}
