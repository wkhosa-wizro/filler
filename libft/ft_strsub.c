/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:09:02 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/07 15:18:00 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sub;

	if (!(sub = ft_strnew(len)))
		return (NULL);
	if (s == NULL)
		return (NULL);
	str = (char *)s + start;
	return (ft_strncpy(sub, str, len));
}
