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

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if (count < 0 || size < 0)
		return (NULL);
	dst = malloc(count * size);
	if (!(dst))
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}
