/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:03:31 by yliu              #+#    #+#             */
/*   Updated: 2024/02/25 17:13:45 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# ifndef FD_MAX
#  define FD_MAX 256
# endif

# define READ_ERROR -1
# define READ_END 0

char	*get_next_line(int fd);

size_t	gnl_strlen(const char *str);
char	*gnl_strchr(const char *s, int c);
size_t	gnl_strlcpy(char *dst, const char *src, size_t size);
char	*gnl_strndup(const char *src, size_t n);
char	*gnl_join_then_free(char **s1, char const *s2);

#endif
