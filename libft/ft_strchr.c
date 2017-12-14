/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:03:15 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:38:57 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(s);
	while (index++ <= len)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
