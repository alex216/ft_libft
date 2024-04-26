/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:26:37 by yliu              #+#    #+#             */
/*   Updated: 2024/04/26 14:31:24 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"
#include "stdlib.h"

static void	_free_a_node(t_lst *lst_p, voidp_2_v del)
{
	if (!lst_p->is_sentinel)
		del(lst_p);
	free(lst_p);
}

void	ft_dl_lstdelone(t_lst **lst_pp, voidp_2_v del)
{
	t_lst	*lst_p;

	if (!lst_pp || !*lst_pp || !del)
		return ;
	lst_p = *lst_pp;
	if (ft_dl_lstsize(lst_p) == 1)
	{
		_free_a_node(lst_p->next_p, del);
		_free_a_node(lst_p, del);
	}
	else
	{
		ft_dl_lstlast(lst_p)->next_p->is_sentinel--;
		lst_p->prev_p->next_p = lst_p->next_p;
		lst_p->next_p->prev_p = lst_p->prev_p;
		_free_a_node(lst_p, del);
	}
	*lst_pp = NULL;
}
