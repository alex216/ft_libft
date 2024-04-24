/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_filter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:11:16 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:21:13 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	ft_dl_lst_filter(t_lst **lst_pp, node_2_bool filer_func, voidp_2_v del)
{
	t_lst	*lst_p;

	if (!lst_pp || !filer_func)
		return ;
	if (!*lst_pp)
		return ;
	lst_p = *lst_pp;
	while (lst_p && !lst_p->is_sentinel)
	{
		if (!filer_func(lst_p))
		{
			lst_p = lst_p->next_p;
			ft_dl_lstdelone(&lst_p->prev_p, del);
		}
		else
			lst_p = lst_p->next_p;
	}
}
