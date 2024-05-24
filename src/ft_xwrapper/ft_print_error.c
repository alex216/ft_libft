/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:42:09 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:51:44 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_xwrapper.h"

int	ft_print_error(const char *err)
{
	ft_dprintf(STDERR_FILENO, "%s %d %s\n", __FILE__, __LINE__, err);
	return (1);
}
