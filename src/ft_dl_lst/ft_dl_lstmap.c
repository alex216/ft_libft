/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:27:52 by yliu              #+#    #+#             */
/*   Updated: 2024/04/28 17:49:24 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"

void	ft_dl_lstmap(t_lst **lst_pp, voidp_2_v convert_func)
{
	t_lst	*lst_p;

	if (!lst_pp || !convert_func)
		return ;
	if (!*lst_pp)
		return ;
	lst_p = *lst_pp;
	while (!lst_p->is_sentinel)
	{
		convert_func(lst_p);
		lst_p = lst_p->next_p;
	}
}
