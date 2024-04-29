/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_linked_list.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:53:01 by yliu              #+#    #+#             */
/*   Updated: 2024/04/28 19:56:51 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOUBLE_LINKED_LIST_H
#define FT_DOUBLE_LINKED_LIST_H

# include <stdbool.h>
# include <stddef.h>
# include "stdlib.h"

typedef struct s_lst	t_lst;

# ifndef T_RECORD
typedef struct s_record	t_record;
# endif

typedef struct s_lst
{
	t_record			*payload_p;
	size_t				is_sentinel;
	t_lst				*next_p;
	t_lst				*prev_p;
}						t_lst;

// function pointer
typedef void (*voidp_2_v)(void *);
typedef bool (*node_2_bool)(const t_lst *);
typedef char * (*node_2_charp)(const t_lst *);

// dl version of libft
// append
bool	ft_dl_lstadd_front_with_lst(t_lst **lst, t_lst *new_node);
bool	ft_dl_lstadd_back_with_lst(t_lst **lst, t_lst *new_node);

// command
void	ft_dl_lstfilter(t_lst **lst_pp, node_2_bool filter_fn, voidp_2_v del);
void	ft_dl_lstmap(t_lst **lst_pp, voidp_2_v convert_fn);
void	ft_dl_lstreduce(t_lst **lst_pp, node_2_bool should_concat, voidp_2_v concat);

// query
size_t	ft_dl_lstsize(const t_lst *lst_p);
t_lst	*ft_dl_lstfirst(const t_lst *lst_p);
t_lst	*ft_dl_lstlast(const t_lst *lst_p);

// del
void	ft_dl_lstdelone(t_lst *lst_p, voidp_2_v del);
void	ft_dl_lstclear(t_lst **lst_pp, voidp_2_v del);

// debug
void	ft_dl_pf_lst(const t_lst *lst_p, node_2_charp get_char);

#endif
