/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:26:37 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:37:31 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"
#include "stdlib.h"

void	ft_dl_lstdelone(t_lst **lst_pp, voidp_2_v del)
{
	t_lst	*lst_p;

	lst_p = *lst_pp;
	if (lst_p == NULL || del == NULL)
		return ;
	if (ft_dl_lstsize(lst_p) == 1)
		ft_dl_lstdelone(&lst_p->next_p, del);
	else
	{
		ft_dl_lstlast(lst_p)->next_p->is_sentinel--;
		lst_p->prev_p->next_p = lst_p->next_p;
		lst_p->next_p->prev_p = lst_p->prev_p;
	}
	del(lst_p);
	free(lst_p);
	lst_p = NULL;
}
