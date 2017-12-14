/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:33:38 by wkhosa            #+#    #+#             */
/*   Updated: 2017/11/20 16:13:19 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddlast(t_list **alst, t_list *new)
{
	t_list	*current;

	if (!new)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	current = *alst;
	while (current->next)
		current = current->next;
	current->next = new;
}
