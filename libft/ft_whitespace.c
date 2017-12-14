/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:39:01 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/09 19:14:20 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespace(const char *str)
{
	int		index;
	int		k;
	char	*whitespace;

	whitespace = "\a\b\f\n\r\t\v ";
	index = 0;
	k = 0;
	while (whitespace[k] != '\0')
	{
		if (whitespace[k] == str[index])
		{
			k = 0;
			index++;
		}
		k++;
	}
	return (index);
}
