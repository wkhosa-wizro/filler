/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:40:34 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 09:09:23 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <stdio.h>
# include "../libft/libft.h"

typedef	struct		s_matrix
{
	int				col;
	int				row;
	signed	char	*elem;
}					t_matrix;

typedef	struct		s_data
{
	int				player;
	signed	char	territory;
	t_matrix		*map;
	t_matrix		*piece;
	t_list			*sol_lst;
	int				num_possbl_sol;
	int				oppnt_x;
	int				oppnt_y;
}					t_data;

t_data				*init_data(void);
void				init_player(t_data *data);
t_list				*init_sol_list(void);
t_matrix			*init_matrix(int col, int row);
void				free_data(t_data *data);

void				print_sol(t_list *sol, int weight);
void				print_matrix(t_matrix *matrix);

signed	char		get_matrix_elem(int col, int row, t_matrix *matrix);
void				fill_row(int row, char *line, t_matrix *matrix);
int					get_piece(t_data *piece);
int					get_map(t_data *map);

int					find_sol(t_data *data);

#endif
