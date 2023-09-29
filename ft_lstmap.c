/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:56:54 by yliu              #+#    #+#             */
/*   Updated: 2023/09/29 22:58:22 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// if t_list pointer is in middle of t_list_array,
// error will occur when read from top of the t_list array,
// after exec this function.

t_list	*ft_lstmap(t_list *old_p, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head_p;
	t_list	*prev_p;

	if (old_p == NULL || f == NULL || del == NULL)
		return (NULL);
	head_p = ft_lstnew(f(old_p->content));
	if (head_p == NULL)
		return (NULL);
	prev_p = head_p;
	old_p = old_p->next;
	while (old_p != NULL)
	{
		prev_p->next = ft_lstnew(f(old_p->content));
		if (prev_p->next == NULL)
		{
			ft_lstclear(&head_p, del);
			return (NULL);
		}
		prev_p = prev_p->next;
		old_p = old_p->next;
	}
	ft_lstlast(head_p)->next = NULL;
	return (head_p);
}

//#include <stdio.h>
//#include <string.h>
//
//int		toupper(int v);
//void	*change(void *str)
//{
//	char *tmp = strdup((char *)str);
//	char *start = tmp;
//	while (*tmp)
//	{
//		*tmp = toupper(*tmp);
//		tmp++;
//	}
//	return (start);
//}
//
//int	main(void)
//{
//	t_list *t1 = ft_lstnew(ft_strdup("hello"));
//	ft_lstadd_back(&t1, ft_lstnew(ft_strdup("world")));
//	ft_lstadd_back(&t1, ft_lstnew(ft_strdup("42")));
//	ft_lstadd_back(&t1, ft_lstnew(ft_strdup("tokyo")));
//	ft_lstadd_back(&t1, ft_lstnew(ft_strdup("student!")));
//
////	// cause error
////	t_list *new = ft_lstmap(t1->next->next->next, change, free);
////	printf("%s\n",(char *)(new->content));
//
//	t_list *new1 = ft_lstmap(t1, change, free);
//	printf("%s ",(char *)(new1->content));
//	printf("%s ",(char *)(new1->next->content));
//	printf("%s ",(char *)(new1->next->next->content));
//	printf("%s ",(char *)(new1->next->next->next->content));
//	printf("%s ",(char *)(new1->next->next->next->next->content));
//}
