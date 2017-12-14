/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:29:41 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/07 19:47:12 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	char	*temp;
	size_t	len;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	temp = ft_strchr(s, '\0') - 1;
	while (temp > s && (*temp == '\t' || *temp == '\n' || *temp == ' '))
		temp--;
	len = (temp - s) + 1;
	if (!(trim = ft_strnew(len)))
		return (NULL);
	ft_strncpy(trim, s, len);
	return (trim);
}
