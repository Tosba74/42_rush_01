/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:45:13 by bmangin           #+#    #+#             */
/*   Updated: 2020/12/08 19:51:36 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_norm_all(void **s, size_t count, size_t size)
{
	if (count < 0 || size < 0)
		return (FAILURE);
	*s = (void *)malloc(count * size);
	if (!(*s))
		return (FAILURE);
	ft_bzero(*s, count * size);
	return (SUCCESS);
}
