/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:32:20 by yliu              #+#    #+#             */
/*   Updated: 2024/05/07 11:48:23 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_print_error(const char *strerror)
{
	ft_dprintf(STDERR_FILENO, "%s:%d:%s\n", __FUNCTION__, __LINE__, strerror);
	return (ALL_ERROR);
}
