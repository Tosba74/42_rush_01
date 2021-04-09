/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 22:58:18 by bmangin           #+#    #+#             */
/*   Updated: 2020/11/09 23:21:24 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	size_t	i;
	size_t	len;
	char	tmp;

	i = 0;
	len = ft_strlen(s) - 1;
	if (len == 0)
		return (NULL);
	while (i <= len)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i] = tmp;
		len--;
		i++;
	}
	return (s);
}
