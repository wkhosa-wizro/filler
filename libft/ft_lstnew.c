/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:01:08 by wkhosa            #+#    #+#             */
/*   Updated: 2017/11/20 12:13:01 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;
	void	*elem;

	lst = (t_list *)malloc(sizeof(t_list));
	elem = (void *)malloc(sizeof(void));
	if (!lst || !elem)
		return (NULL);
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
	}
	else
	{
		lst->content = ft_memmove(elem, content, content_size);
		lst->content_size = content_size;
		lst->next = NULL;
	}
	return (lst);
}
