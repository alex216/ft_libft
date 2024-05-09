/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xwrapper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:27:01 by yliu              #+#    #+#             */
/*   Updated: 2024/05/07 12:16:42 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_XWRAPPER_H
# define FT_XWRAPPER_H

#include "ft_utils.h"
#include <unistd.h>
#include <sys/errno.h>
#include <stdbool.h>
#include <sys/errno.h>
#include <string.h>

# define SUCCESS 0
# define CHILD 0
# define PARENT 1
# define FAIL -1

pid_t	ft_xfork(void);
void	ft_xclose(int fd);
void	ft_xpipe(int *pipefd);
void	xdup2(int dst, int src);
bool	ft_xaccess_is_x_ok(const char *name);
bool	ft_xaccess_is_f_ok(const char *name);

#endif
