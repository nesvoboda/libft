/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:04:25 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/07 16:26:28 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*our_dst;
	unsigned char	*our_src;
	unsigned char	stop;

	i = 0;
	our_dst = dst;
	our_src = (unsigned char*)src;
	stop = c;
	while (i < n)
	{
		our_dst[i] = our_src[i];
		if (our_src[i] == stop)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
