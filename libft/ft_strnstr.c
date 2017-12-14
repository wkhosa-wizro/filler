/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 11:13:07 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:40:48 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	index;
	unsigned int	index_big;
	size_t			lit_len;

	index = 0;
	lit_len = ft_strlen(little);
	if (lit_len == 0)
		return ((char*)big);
	while (big[index] && (index + lit_len) <= len)
	{
		index_big = 0;
		while (little[index_big] == big[index_big + index])
		{
			if (index_big == (lit_len - 1))
				return ((char*)big + index);
			index_big++;
		}
		index++;
	}
	return (NULL);
}
