/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:21:49 by wkhosa            #+#    #+#             */
/*   Updated: 2017/11/20 17:24:27 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh_list;

	if (!(fresh_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	fresh_list = NULL;
	while (lst)
	{
		ft_lstaddlast(&fresh_list, f(lst));
		lst = lst->next;
	}
	return (fresh_list);
}
