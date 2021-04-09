/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 00:54:59 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/09 21:16:53 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 1;
	str = NULL;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[i + start] && i < len)
		i++;
	if (ft_norm_all((void *)&str, i + 1, sizeof(char)))
		return (NULL);
	i = 0;
	while (s[i] && i < len)
		str[i++] = s[start++];
	return (str);
}
