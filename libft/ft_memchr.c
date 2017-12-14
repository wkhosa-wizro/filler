/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 16:16:29 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:26:23 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int					index;
	unsigned	char	*str;

	index = 0;
	str = (unsigned char *)s;
	while (n--)
	{
		if (str[index] == (unsigned char)c)
			return ((unsigned char *)str + index);
		index++;
	}
	return (NULL);
}
