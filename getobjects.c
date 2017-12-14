/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getobjects.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:08:48 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 08:52:15 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

signed	char	get_matrix_elem(int col, int row, t_matrix *matrix)
{
	int			index;

	if ((col < 0) || (row < 0) || (col >= matrix->col) || (row >= matrix->row))
		return (-1);
	index = (matrix->col) * (row) + col;
	return ((matrix->elem)[index]);
}

signed	char	game_elem(char c)
{
	if (c == '.')
		return (0);
	else if (c == '*')
		return (1);
	else if ((c) == 'o')
		return (2);
	else if (c == 'O')
		return (3);
	else if ((c) == 'x')
		return (4);
	else if (c == 'X')
		return (5);
	else
		return (-1);
}

void			fill_row(int row, char *line, t_matrix *matrix)
{
	int				col;
	signed	char	data;
	char			*temp;
	int				index;

	col = 0;
	temp = line;
	while (col < (matrix->col))
	{
		if ((data = game_elem(*temp)) >= 0)
		{
			index = (matrix->col) * (row) + col;
			(matrix->elem)[index] = data;
			col++;
		}
		temp++;
	}
}
