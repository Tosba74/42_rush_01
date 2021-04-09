/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:08:23 by bmangin           #+#    #+#             */
/*   Updated: 2021/03/16 15:52:56 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_good_s(char const *s1, char const *s2, int sp)
{
	if (sp == 1)
		ft_memdel((void *)s1);
	else if (sp == 2)
		ft_memdel((void *)s2);
	else if (sp == 3)
	{
		ft_memdel((void *)s1);
		ft_memdel((void *)s2);
	}
}

char	*ft_strjoin_free(char const *s1, char const *s2, int sp)
{
	size_t	len1;
	size_t	len2;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * len1 + len2 + 1);
	if (!(s))
		return (NULL);
	ft_memcpy(s, s1, len1);
	ft_memcpy(s + len1, s2, len2 + 1);
	if (sp != 0)
		ft_free_good_s(s1, s2, sp);
	return (s);
}
