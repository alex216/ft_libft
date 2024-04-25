/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:05:17 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:39:53 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_double_linked_list.h"

size_t	ft_dl_lstsize(const t_lst *lst_p)
{
	if (lst_p == NULL)
		return (0);
	return (lst_p->prev_p->is_sentinel);
}
