/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 17:00:30 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:29:37 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	if (s2 < s1)
	{
		while (len--)
			s1[len] = s2[len];
	}
	else
		ft_memcpy(s1, s2, len);
	return (dest);
}
