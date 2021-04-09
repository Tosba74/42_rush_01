/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 21:26:54 by bmangin           #+#    #+#             */
/*   Updated: 2021/02/05 12:27:15 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUFFER_SIZE 1

static int	ft_find_eol(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		if (s[i++] == '\n')
			return (FAILURE);
	return (SUCCESS);
}

static char	*ft_copy_line(char *rest, char *line)
{
	int			i;

	i = 0;
	while (rest[i] && rest[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!(line))
		return (NULL);
	ft_memcpy(line, rest, i);
	line[i] = '\0';
	return (line);
}

static char	*ft_after_eol(char *rest)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (rest[i] && rest[i] != '\n')
		i++;
	if (!(rest[i]))
	{
		ft_memdel(rest);
		return (NULL);
	}
	tmp = malloc(sizeof(char) * (ft_strlen(rest) - i));
	if (!(tmp))
	{
		ft_memdel(rest);
		return (NULL);
	}
	ft_memcpy(tmp, rest + i + 1, ft_strlen(rest) - i);
	ft_memdel(rest);
	return (tmp);
}

static int	ft_create_line(char **rest, char **line, int ret)
{
	*line = ft_copy_line(*rest, *line);
	*rest = ft_after_eol(*rest);
	if (ret == 0)
	{
		ft_memdel(*rest);
		return (SUCCESS);
	}
	return (FAILURE);
}

int	get_next_line(int fd, char **line)
{
	int			ret;
	char		buf[BUFFER_SIZE + 1];
	static char	*rest[OPEN_MAX];

	if (!line || fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
	if (!rest[fd])
		rest[fd] = ft_strdup("");
	while (ft_find_eol(rest[fd]) != 1)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
		{
			ft_memdel(rest[fd]);
			return (-1);
		}
		else if (ret == 0)
			break ;
		buf[ret] = '\0';
		rest[fd] = ft_strjoin_free(rest[fd], buf, 1);
	}
	return (ft_create_line(&rest[fd], line, ret));
}
