/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:52:24 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/07 14:06:21 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	**alst;

	(void)del;
	if (lst == NULL)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	alst = &result;
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(alst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (result);
}
