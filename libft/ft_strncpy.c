/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:32:30 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:43:03 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	index;

	index = 0;
	while (index < len)
	{
		if (*src != '\0')
			dest[index++] = *src++;
		else
			dest[index++] = '\0';
	}
	return (dest);
}
