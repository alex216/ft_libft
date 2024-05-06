/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstreduce.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:56:36 by yliu              #+#    #+#             */
/*   Updated: 2024/04/28 21:50:23 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"

void	ft_dl_lstreduce(t_lst **lst_pp, node_2_bool should_concat,
		voidp_2_v concat)
{
	t_lst	*lst_p;

	if (!lst_pp || !*lst_pp || !should_concat || !concat)
		return ;
	lst_p = *lst_pp;
	while (!lst_p->is_sentinel)
	{
		if (!lst_p->next_p->is_sentinel && should_concat(lst_p))
			concat(lst_p);
		else
			lst_p = lst_p->next_p;
	}
	return ;
}
