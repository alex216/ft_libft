/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:42:09 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:01:31 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_xwrapper.h"

int	ft_print_error(const char *err)
{
	ft_dprintf(STDERR_FILENO, "%s %s %s %s\n", __FILE__, __func__, __LINE__,
		err);
	return (1);
}
