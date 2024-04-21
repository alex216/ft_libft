/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:57:56 by yliu              #+#    #+#             */
/*   Updated: 2024/04/21 18:41:30 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_p;

	lst_p = (t_list *)ft_xcalloc(sizeof(t_list));
	lst_p->content = content;
	lst_p->next = NULL;
	return (lst_p);
}
