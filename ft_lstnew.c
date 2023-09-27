/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:57:56 by yliu              #+#    #+#             */
/*   Updated: 2023/09/23 23:15:04 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tlist_ptr;

	tlist_ptr = (t_list *)malloc(sizeof(t_list));
	if (!tlist_ptr)
		return (NULL);
	tlist_ptr->content = content;
	tlist_ptr->next = NULL;
	return (tlist_ptr);
}
