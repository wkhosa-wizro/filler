/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 00:44:56 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/09 12:46:21 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnewap(size_t size)
{
	char	**str;

	if (!(str = (char **)malloc(sizeof(char*) * size + 1)))
		return (NULL);
	ft_bzero(str, size + 1);
	str[size] = NULL;
	return (str);
}
