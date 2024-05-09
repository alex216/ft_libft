/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:06:29 by yliu              #+#    #+#             */
/*   Updated: 2024/05/07 11:43:02 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include "stdlib.h"
# include "ft_printf.h"

typedef enum e_exit_status
{
	ALL_ERROR = 42,
	NOT_EXECUTABLE = 126,
	NO_FILE_OR_CMD_ERR = 127
}	t_exit_status;

void	ft_free_list(void **list);
void	*ft_xcalloc(size_t sizet);
int		ft_print_error(const char *strerror);

#endif
