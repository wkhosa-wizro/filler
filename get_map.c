/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:32:55 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 08:51:36 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

int		get_map(t_data *data)
{
	char		*line;
	t_matrix	*map;
	int			row;

	if (get_next_line(0, &line) > 0)
	{
		map = init_matrix(ft_atoi(ft_strrchr(line, ' ')),
	ft_atoi(ft_strchr(line, ' ')));
		data->map = map;
		free(line);
		if (get_next_line(0, &line) > 0)
		{
			row = 0;
			free(line);
			while (row < (map->row))
			{
				if (get_next_line(0, &line) > 0)
				{
					fill_row(row++, line, map);
					free(line);
				}
			}
		}
	}
	return (1);
}
