/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 09:47:24 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 02:46:46 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s1);
	index = 0;
	while (*s2 != '\0' && index < n)
		s1[len + index++] = *s2++;
	s1[len + index] = '\0';
	return (s1);
}
