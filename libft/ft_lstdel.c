/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:25:38 by wkhosa            #+#    #+#             */
/*   Updated: 2017/11/20 14:00:42 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nlst;

	lst = *alst;
	while (lst)
	{
		nlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nlst;
	}
	*alst = NULL;
}
