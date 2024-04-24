/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:46:10 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:37:20 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

t_lst	*ft_dl_lstlast(const t_lst *lst_p)
{
	if (lst_p == NULL)
		return (NULL);
	while (!lst_p->is_sentinel)
		lst_p = lst_p->next_p;
	return (lst_p->prev_p);
}
