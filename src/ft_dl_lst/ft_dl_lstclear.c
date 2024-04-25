/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:40:34 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 09:03:48 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "double_linked_list.h"

bool	_ret_always_true(const t_lst *p)
{
	(void)p;
	return (true);
}

void	ft_dl_lstclear(t_lst **lst_pp, voidp_2_v *del)
{
	if (!lst_pp || !del)
		return ;
	if (!*lst_pp)
		return ;
	ft_dl_lst_filter(lst_pp, *_ret_always_true, *del);
}
