/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:33:54 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/07 16:36:19 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if ((result = malloc(sizeof(char) * total_size)) == NULL)
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1));
	ft_memcpy((result + ft_strlen(s1)), s2, ft_strlen(s2));
	result[total_size - 1] = '\0';
	return (result);
}
