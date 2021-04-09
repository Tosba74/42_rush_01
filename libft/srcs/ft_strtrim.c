/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 01:24:22 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/07 12:09:51 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (FAILURE);
		set++;
	}
	return (SUCCESS);
}

static int	ft_len_word(char const *s, char const *set)
{
	int		i;
	int		size;
	int		len;

	i = 0;
	size = ft_strlen(s) - 1;
	len = 0;
	while (s[i] && ft_check_set(s[i], set) != 0)
		i++;
	while (size != 0 && ft_check_set(s[size], set) != 0)
		size--;
	if (size > i)
		len = size - i;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*s;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (NULL);
	len = ft_len_word(s1, set);
	if (len == 0)
		return (ft_strdup(""));
	s = NULL;
	if (ft_norm_all((void *)&s, len + 2, sizeof(char)))
		return (NULL);
	while (s1[i] && ft_check_set(s1[i], set) != 0)
		i++;
	while (j <= len && len != 0)
		s[j++] = s1[i++];
	s[len + 1] = '\0';
	return (s);
}
