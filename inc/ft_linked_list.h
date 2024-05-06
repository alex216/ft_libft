/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:12:28 by yliu              #+#    #+#             */
/*   Updated: 2024/05/06 21:17:17 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_H
# define FT_LINKED_LIST_H

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

t_list					*ft_lstnew(void *content);
void					ft_lstadd_front(t_list **lst_pp, t_list *new_node);
int						ft_lstsize(t_list *lst_p);
t_list					*ft_lstlast(t_list *lst_p);
void					ft_lstadd_back(t_list **lst_pp, t_list *new_node);
void					ft_lstdelone(t_list *lst_p, void (*del)(void *));
void					ft_lstclear(t_list **lst_pp, void (*del)(void *));
void					ft_lstiter(t_list *tlst_p, void (*f)(void *));
t_list					*ft_lstmap(t_list *lst_p, void *(*f)(void *),
							void (*del)(void *));
#endif
