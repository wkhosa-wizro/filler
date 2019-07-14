/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:09:32 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 09:08:52 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"
#include <stdio.h>

int		main(void)
{
	t_data	*data;
	int		weight;

	data = init_data();
	init_player(data);
	if (data->player == 1)
		weight = 2;
	else
		weight = 1;
	while (1)
	{
		data->sol_lst = init_sol_list();
		get_map(data);
		get_piece(data);
		if (find_sol(data) == 0)
		{
			ft_putstr_fd("8 2\n", 1);
			break ;
		}
		else {
			print_sol(data->sol_lst, weight);
		}
	}
	free_data(data);
	return (1);
}
