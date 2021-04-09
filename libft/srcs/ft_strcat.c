/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:06:12 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/07 23:53:00 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	lendst;

	i = 0;
	lendst = ft_strlen(dst);
	while (src[i])
		dst[lendst++] = src[i++];
	dst[lendst] = '\0';
	return (dst);
}
