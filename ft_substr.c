/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:26:08 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/07 16:35:45 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		y;
	char		*result;

	i = start;
	y = 0;
	if (s == NULL)
		return (NULL);
	if ((result = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		result[0] = '\0';
		return (result);
	}
	while (y < len && s[i] != '\0')
		result[y++] = s[i++];
	result[y] = '\0';
	return (result);
}
