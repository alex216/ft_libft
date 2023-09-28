/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 23:05:42 by yliu              #+#    #+#             */
/*   Updated: 2023/09/28 17:59:36 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst_pp, void (*del)(void *))
{
	t_list	*p;
	t_list	*tmp_p;

	if (lst_pp == NULL || del == NULL)
		return ;
	if (*lst_pp == NULL)
		return ;
	p = *lst_pp;
	while (p != NULL)
	{
		tmp_p = p->next;
		ft_lstdelone(p, del);
		p = tmp_p;
	}
	*lst_pp = NULL;
}
