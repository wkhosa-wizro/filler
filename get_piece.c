/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_piece.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:24:29 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 08:51:52 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

int		get_piece(t_data *data)
{
	t_matrix	*piece;
	char		*line;
	int			row;

	if (get_next_line(0, &line) > 0)
	{
		piece = init_matrix(ft_atoi(ft_strrchr(line, ' ')),
	ft_atoi(ft_strchr(line, ' ')));
		free(line);
		row = 0;
		data->piece = piece;
		while (row < piece->row)
		{
			if (get_next_line(0, &line) > 0)
			{
				fill_row(row++, line, piece);
				free(line);
			}
		}
	}
	return (1);
}
