/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xaccess_is_f_ok.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:39:43 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:09:03 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_xwrapper.h"

bool	ft_xaccess_is_f_ok(const char *name)
{
	if (access(name, 0) != 0)
		exit(ft_print_error(strerror(ENOENT)));
	return (true);
}
