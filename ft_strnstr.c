/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:42:32 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/09 17:38:14 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0 &&
			((i + needle_len) <= len))
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}
