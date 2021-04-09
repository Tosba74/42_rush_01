/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:59:38 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/04 13:57:40 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	size;

	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	dst = NULL;
	if (ft_norm_all((void *)&dst, size + 1, sizeof(char)))
		return (NULL);
	ft_memcpy(dst, s1, size + 1);
	return (dst);
}
