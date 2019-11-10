/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:24:13 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/05 13:31:06 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*our_s1;
	unsigned char	*our_s2;

	i = 0;
	our_s1 = (unsigned char *)s1;
	our_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (our_s1[i] != our_s2[i])
			return (our_s1[i] - our_s2[i]);
		i++;
	}
	return (0);
}
