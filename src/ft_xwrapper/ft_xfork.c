/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xfork.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:16:57 by yliu              #+#    #+#             */
/*   Updated: 2024/05/07 12:17:04 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_xwrapper.h"

pid_t	ft_xfork(void)
{
	pid_t	pid;

	pid = fork();
	if (pid == FAIL)
		exit(ft_print_error(strerror(errno)));
	return (pid);
}
