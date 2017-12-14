/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 13:34:44 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/09 13:51:44 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbrlen(long value)
{
	int			len;
	int			sign;

	sign = 0;
	len = 0;
	if (value < 0)
		sign++;
	if (value == 0)
		return (1);
	while (value)
	{
		value /= 10;
		len++;
	}
	return (len + sign);
}

static	int	ft_topositive(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*snbr;
	int		len;
	int		sign;

	sign = 0;
	len = ft_nbrlen(n);
	if (!(snbr = ft_strnew(len)))
		return (NULL);
	if (ft_topositive(&n))
		sign++;
	if (n > 2147483647 || n < -2147483647)
	{
		ft_strcpy(snbr, "-2147483648");
		return (snbr);
	}
	while (len--)
	{
		snbr[len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		snbr[0] = '-';
	return (snbr);
}
