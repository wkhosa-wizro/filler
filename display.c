/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:22:46 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 08:53:49 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

void	print_sol(t_list *sol, int weight)
{
	int		fd;
	t_list	*current;
	fd = 1;
	if (sol == NULL)
	{
		ft_putstr_fd("0 0\n", fd);
		return ;
	}
	current = sol;

	while ((current->next) && ((int *)current->content)[2] != weight) {
		fprintf(stderr,"\nSol %d , %d : %d", ((int *)current->content)[1],
												((int *)current->content)[0],
											((int *)current->content)[2]);
		current = current->next;
	}

	ft_putnbr_fd(((int *)current->content)[1], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(((int *)current->content)[0], fd);
	ft_putstr_fd("\n", fd);
}

void	print_matrix(t_matrix *matrix)
{
	int		col;
	int		row;
	int		elem;
	int		fd;

	fd = 2;
	row = 0;
	while (row < matrix->row)
	{
		col = 0;
		ft_putstr_fd("[ ", fd);
		while (col < matrix->col)
		{
			elem = (int)get_matrix_elem(col, row, matrix);
			ft_putnbr_fd(elem, fd);
			ft_putstr_fd(" ", fd);
			col++;
		}
		ft_putstr_fd("]\n", fd);
		row++;
	}
}
