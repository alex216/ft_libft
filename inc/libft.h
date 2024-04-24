/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:04:03 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:52:14 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>


// mem-group
#include "memory.h"

#include "dlist.h"

// utils-group
#include "utils.h"

# define MAX_CHAR 256

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

// is-group
int						ft_isalnum(int i);
int						ft_isalpha(int i);
int						ft_isascii(int i);
int						ft_isdigit(int i);
int						ft_isprint(int i);

// to-group
int						ft_tolower(int i);
int						ft_toupper(int i);
int						ft_atoi(const char *str);

// str-group
char					*ft_substr(char const *s, unsigned int start,
							size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s1, char const *set);
char					**ft_split(char const *str, char c);
char					*ft_itoa(int n);
char					*ft_strmapi(char const *s, char (*f)(unsigned int,
								char));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strchr(const char *s, int i);
char					*ft_strdup(const char *s);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
size_t					ft_strlcpy(char *dest, const char *src, size_t size);
size_t					ft_strlen(const char *str);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strnstr(const char *haystack, const char *needle,
							size_t len);
char					*ft_strrchr(const char *s, int c);

// put-group
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char *s, int fd);
void					ft_putendl_fd(char *s, int fd);
void					ft_putnbr_fd(int n, int fd);

// lst-group
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

//////////////////////////////////////////
// updated libft

// is2-group
bool					ft_isblank(char c);
bool					ft_isquote(char c);
bool					ft_iswildcard(char c);
bool					ft_isreserved_word(char c);
bool					ft_ismetacharacter(char c);
bool					ft_isspecial_char(char c);

// str2-group
char	*ft_strjooin(int argc, const char *a, const char *b, ...);

// math-group
int	ft_min(int argc, int a, int b, ...);

#endif
