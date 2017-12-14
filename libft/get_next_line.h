/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 13:00:00 by wkhosa            #+#    #+#             */
/*   Updated: 2017/12/14 09:16:40 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

# include "libft.h"
# include <sys/types.h>
# include <sys/uio.h>

int		get_next_line(const int fd, char **line);

#endif
