/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xaccess_is.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:17:19 by yliu              #+#    #+#             */
/*   Updated: 2024/05/07 12:17:20 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_xwrapper.h"

bool	ft_xaccess_is_f_ok(const char *name)
{
	if (access(name, F_OK) != 0)
		exit(ft_print_error(strerror(ENOENT)));
	return (true);
}

bool	ft_xaccess_is_x_ok(const char *name)
{
	if (access(name, X_OK) != 0)
		exit(ft_print_error(strerror(EACCES)));
	return (true);
}
