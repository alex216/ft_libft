/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:31:41 by yliu              #+#    #+#             */
/*   Updated: 2023/09/27 09:37:05 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst_ptr, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tlst_tmp_ptr;

	while (lst_ptr)
	{
		tlst_tmp_ptr = f(lst_ptr);
		lst_ptr = lst_ptr->next;
	}
}
