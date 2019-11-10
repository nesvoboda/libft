/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:09:42 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/09 17:38:00 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t y;
	size_t initial_dst;

	i = 0;
	y = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	initial_dst = i;
	if (dstsize == 0 || i == dstsize)
		return (ft_strlen(src) + dstsize);
	while (i < dstsize - 1 && src[y] != '\0')
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + initial_dst);
}
