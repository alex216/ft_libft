/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstfilter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:11:16 by yliu              #+#    #+#             */
/*   Updated: 2024/05/06 21:31:15 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"

void	ft_dl_lstfilter(t_lst **lst_pp, t_node_2_bool filer_func,
		t_voidp_2_v del)
{
	t_lst	*lst_p;

	if (!lst_pp || !filer_func)
		return ;
	if (!*lst_pp)
		return ;
	lst_p = *lst_pp;
	while (lst_p && !lst_p->is_sentinel)
	{
		lst_p = lst_p->next_p;
		if (!filer_func(lst_p->prev_p))
			ft_dl_lstdelone(lst_p->prev_p, del);
	}
	if (lst_p)
		*lst_pp = lst_p->next_p;
	else
		*lst_pp = NULL;
}
