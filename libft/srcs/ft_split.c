/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:59:41 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/09 15:35:04 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_words(char const *s, char c, int pos)
{
	size_t	i;

	i = 0;
	while (s[pos + i] && s[pos + i] != c)
		i++;
	return (i);
}

static int	ft_nb_words(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (s == NULL)
		return (i);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i + 1] == '\0' || s[i + 1] == c)
			&& s[i] != c)
			nb++;
		i++;
	}
	return (nb);
}

static char	**ft_free_all(char **tab, int t)
{
	int	i;

	i = 0;
	while (i != t)
		free(tab[i++]);
	free(tab);
	return (tab);
}

static char	*ft_new_words(char const *s, int *index, char c)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (ft_norm_all((void *)&str, ft_len_words(s, c, *index) + 1, sizeof(char)))
		return (NULL);
	while (s[*index] && s[*index] != c)
		str[i++] = s[(*index)++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		t;
	int		nb_words;
	char	**tab;

	i = 0;
	t = -1;
	nb_words = ft_nb_words(s, c);
	tab = NULL;
	if (!s || ft_norm_all((void *)&tab, (nb_words + 1), sizeof(char *)))
		return (NULL);
	while (++t < nb_words)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c)
		{
			tab[t] = ft_new_words(s, &i, c);
			if (!(tab[t]))
				return (ft_free_all(tab, t));
		}
	}
	tab[t] = NULL;
	return (tab);
}
