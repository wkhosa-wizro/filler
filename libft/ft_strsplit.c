/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 00:30:15 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/08 04:52:33 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*get_word(char **s, char c)
{
	char	*temp;
	size_t	len;

	if (*s == NULL)
		return (NULL);
	while (**s == c && **s != '\0')
		(*s)++;
	temp = (*s);
	len = 0;
	while (*temp != c && *temp != '\0')
	{
		temp++;
		len++;
	}
	temp = ft_strsub(*s, 0, len);
	*s = (*s) + len;
	return (temp);
}

static	int		count_wd(char *s, char c)
{
	int		nbr;
	int		flag;

	nbr = 0;
	while (*s != '\0')
	{
		flag = 0;
		while (*s != c && *s != '\0')
		{
			flag++;
			if (flag == 1)
				nbr++;
			s++;
		}
		if (flag == 0)
			s++;
	}
	return (nbr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	char	*temp;
	int		nbr_words;
	int		index;

	if (!s)
		return (NULL);
	temp = (char *)s;
	nbr_words = count_wd(temp, c);
	if (!(split = ft_strnewap(nbr_words)))
		return (NULL);
	index = 0;
	while (nbr_words--)
	{
		split[index++] = get_word(&temp, c);
	}
	return (split);
}
