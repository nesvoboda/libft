/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashishae <ashishae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:33:38 by ashishae          #+#    #+#             */
/*   Updated: 2019/11/06 12:28:30 by ashishae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_digits(int n)
{
	int	digits;

	if (n == 0)
		return (1);
	if (n < 0)
	{
		digits = 1;
	}
	else
	{
		digits = 0;
	}
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				digits;
	int				i;
	int				stop;
	long long int	nbr;

	digits = count_digits(n);
	i = digits - 1;
	stop = ((n < 0) ? 0 : -1);
	if (n < 0)
		nbr = n == -2147483648 ? 2147483648 : -n;
	else
		nbr = n;
	if (!(result = malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	result[digits] = '\0';
	while (i > stop)
	{
		result[i--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (stop == 0)
		result[0] = '-';
	return (result);
}
