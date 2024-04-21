/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:40:34 by yliu              #+#    #+#             */
/*   Updated: 2024/04/21 15:30:01 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dl_lstclear(t_lst **lst_pp, void (*del)(void *))
{
	t_lst	*iter_p;
	t_lst	*tmp_p;

	if (!lst_pp || !del)
		return ;
	if (!*lst_pp)
		return ;
	iter_p = *lst_pp;
	while (iter_p->is_sentinel == false)
	{
		tmp_p = iter_p->next_p;
		ft_dl_lstdelone(iter_p, del);
		iter_p = tmp_p;
	}
	ft_dl_lstdelone(iter_p, del);
	*lst_pp = NULL;
}
