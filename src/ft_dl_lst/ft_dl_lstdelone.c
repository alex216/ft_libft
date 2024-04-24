/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:26:37 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 10:35:36 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dl_lstdelone(t_lst *lst_p, void (*del)(void *))
{
	if (lst_p == NULL || del == NULL)
		return ;
	if (lst_p->is_sentinel)
	{
		free(lst_p);
		return ;
	}
	lst_p->prev_p->next_p = lst_p->next_p;
	lst_p->next_p->prev_p = lst_p->prev_p;
	del(lst_p);
	free(lst_p);
}
