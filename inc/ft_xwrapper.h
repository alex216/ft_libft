/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xwrapper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:40:32 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:09:03 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_XWRAPPER_H
# define FT_XWRAPPER_H

# include "ft_printf.h"
# include <errno.h>
# include <stdbool.h>
# include <string.h>
# include <unistd.h>

bool	ft_xaccess_is_f_ok(const char *name);
int		ft_print_error(const char *err);
#endif
