/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:04:12 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/05 13:20:38 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	needle;
	unsigned char	*str;

	i = 0;
	needle = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == needle)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
