/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:40:27 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/09 18:11:37 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*find_start(char const *s1, char const *set)
{
	int set_len;

	set_len = ft_strlen(set);
	while (ft_memchr(set, *s1, set_len) != NULL && *s1)
		s1++;
	return ((char *)s1);
}

char	*find_end(char const *s1, char const *set)
{
	int		set_len;
	char	*start;

	start = (char *)s1;
	set_len = ft_strlen(set);
	while (*s1)
		s1++;
	s1--;
	while (ft_memchr(set, *s1, set_len) != NULL && s1 > start)
		s1--;
	if (s1 == start)
		return (start);
	return ((char *)(s1 + 1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*start;
	char	*end;
	int		size;
	int		y;

	if (!s1)
		return (NULL);
	y = 0;
	start = find_start(s1, set);
	end = find_end(s1, set);
	size = ((end - start) <= 0) ? 0 : end - start;
	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	while (start < end)
		result[y++] = *(start++);
	result[y] = '\0';
	return (result);
}
