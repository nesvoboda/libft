/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:25:48 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/06 13:49:29 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*our_dst;
	char	*our_src;
	size_t	i;

	our_dst = dst;
	our_src = (char *)src;
	if ((src < dst) && (dst < (src + len)))
	{
		i = len - 1;
		while (1)
		{
			our_dst[i] = our_src[i];
			if (i != 0)
				i--;
			else
				return (dst);
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
