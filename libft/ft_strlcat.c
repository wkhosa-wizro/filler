/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:00:59 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:49:09 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	if (ft_strlen(dst) < size)
		dst_len = ft_strlen(dst);
	else
		dst_len = size;
	src_len = ft_strlen(src);
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_strncat(dst, src, src_len + 1);
	else
	{
		ft_strncat(dst, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}
