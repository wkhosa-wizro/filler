/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsolutions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:08:18 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 08:54:00 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

int		validate_move(int *col_row, t_data *data)
{
	signed	char	check;
	int				row;
	int				col;
	int				num_overlap;

	row = -1;
	num_overlap = 0;
	while (++row < (data->piece->row))
	{
		col = -1;
		while (++col < (data->piece->col))
		{
			check = get_matrix_elem(col, row, data->piece) *
	get_matrix_elem(col_row[0] + col, col_row[1] + row, data->map);
			if ((check == 0) || (check == (data->territory + 1)))
			{
				if (check == data->territory || check == (data->territory + 1))
					num_overlap++;
			}
			else
				return (0);
		}
	}
	return (num_overlap);
}

void	add_valid_sol(int *col_row, t_data *data)
{
	if (validate_move(col_row, data) == 1)
	{
		ft_lstaddlast(&(data->sol_lst), ft_lstnew((void *)col_row,
	sizeof(int) * 3));
		data->num_possbl_sol++;
	}
}

int		find_sol(t_data *data)
{
	int			*col_row;
	float		len_1, len_2;
	int			weight;

	weight = 1;

	if (!(col_row = (int *)malloc(sizeof(int) * 3)))
		return (-1);
	col_row[0] = 1 - (data->piece->col);
	col_row[2] = 1;
	data->num_possbl_sol = 0;
	while (col_row[0] < data->map->col)
	{
		col_row[1] = 1 - data->piece->row;
		while (col_row[1] < data->map->row)
		{
			len_1 = col_row[0] - ((data->piece->col) / 2.0);
			len_2 = col_row[1] - ((data->piece->row) / 2.0);
			if ((len_1 >= 0 && len_2 >=0) &&
											(ft_strcmp(data->dir, "NE") == 0)){
				weight = weight * 4;

				ft_strcpy( data->dir, "NW");
			} else if ((len_1 >= 0 && len_2 < 0) &&
											(ft_strcmp(data->dir, "NW") == 0)){
				weight = weight * 4;

				ft_strcpy( data->dir, "SW");
			} else if ((len_1 < 0 && len_2 < 0) &&
											(ft_strcmp(data->dir, "SW") == 0)){
				weight = weight * 4;

				ft_strcpy( data->dir, "SE");
			} else if ((len_1 < 0 && len_2 >= 0) &&
											(ft_strcmp(data->dir, "SE") == 0)){
				weight = weight * 4;

				ft_strcpy( data->dir, "NE");
			} else {
				weight = 1;

			}
			col_row[2] = (len_1 * len_1 + len_2 * len_2) * weight;
			add_valid_sol(col_row, data);
			col_row[1] += 1;
		}
		col_row[0] += 1;
	}
	free(col_row);
	return (data->num_possbl_sol);
}
