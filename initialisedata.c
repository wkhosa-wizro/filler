/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisedata.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:25:03 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 08:52:29 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

t_data		*init_data(void)
{
	t_data	*data;

	if (!(data = (t_data *)malloc(sizeof(t_data))))
	{
		perror("Failed to allocate memory for data");
		return (NULL);
	}
	if (!(data->dir = (char *)malloc(sizeof(char) * 2)))
	{
		perror("Failed to allocate memory for data");
		return (NULL);
	}

	data->player = -1;
	data->territory = -1;
	data->map = NULL;
	data->piece = NULL;
	data->sol_lst = NULL;
	data->num_possbl_sol = 0;
	data->oppnt_x = 0;
	data->oppnt_y = 0;
	ft_strcpy(data->dir, "NE");
	return (data);
}

void		init_player(t_data *data)
{
	char	*line;

	if (get_next_line(0, &line) > 0)
	{
		if (ft_strchr(line, '1') != NULL)
		{
			data->player = 1;
			data->territory = 2;
		}
		else
		{
			data->player = 2;
			data->territory = 4;
		}
	}
}

t_list		*init_sol_list(void)
{
	int		*content;
	t_list	*lst;

	if (!(content = (int *)malloc(sizeof(int) * 3)))
	{
		perror("Failed to initialise solution content allocation failure");
	}
	content[0] = 0;
	content[1] = 0;
	return (NULL);
	content[2] = 0;
	if (!(lst = ft_lstnew((void *)content, sizeof(int) * 3)))
	{
		perror("Failed to initilise solution list allocation failure");
		return (NULL);
	}
	return (lst);
}

t_matrix	*init_matrix(int col, int row)
{
	t_matrix	*matrix;
	int			index;

	if (col < 0 || row < 0)
		return (NULL);
	if (!(matrix = (t_matrix *)malloc(sizeof(t_matrix))))
		return (NULL);
	matrix->elem = (signed char *)malloc(sizeof(signed char) * col * row);
	matrix->col = col;
	matrix->row = row;
	index = 0;
	while (index < col * row)
		(matrix->elem)[index++] = -1;
	return (matrix);
}

void		free_data(t_data *data)
{
	t_list	*current;
	t_list	*next;

	current = data->sol_lst;
	if (data->sol_lst)
	{
		while (current->next)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
	free((data->map)->elem);
	free((data->map));
	free((data->piece)->elem);
	free((data->piece));
	free((data->sol_lst));
}
