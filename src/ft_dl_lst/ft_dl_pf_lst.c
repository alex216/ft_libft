/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_pf_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:31:52 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:35:27 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"
#include "ft_printf.h"

static void	_print_ascending_direction(const t_lst *lst_p,
	char *(*return_printable)(const t_lst *))
{
	t_lst	*lst_last_p;

	lst_last_p = ft_dl_lstlast(lst_p);
	while (!lst_p->is_sentinel)
	{
		ft_printf("%s", return_printable((const t_lst *)lst_p));
		if (lst_p != lst_last_p)
			ft_printf(",");
		lst_p = lst_p->next_p;
	}
}

void	ft_dl_pf_lst(const t_lst *lst_p,
	char *(*return_printable)(const t_lst *))
{
	if (!lst_p || !(*return_printable))
	{
		ft_printf("t_lst or funct pointer is NULL\n");
		return ;
	}
	_print_ascending_direction(lst_p, return_printable);
	ft_printf("\n");
	return ;
}
