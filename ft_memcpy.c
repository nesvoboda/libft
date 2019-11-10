/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:04:25 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/07 16:30:33 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*our_dst;
	unsigned char	*our_src;

	i = 0;
	our_dst = dst;
	our_src = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		our_dst[i] = our_src[i];
		i++;
	}
	return (dst);
}
