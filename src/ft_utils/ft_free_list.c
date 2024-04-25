/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:45:55 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 09:01:46 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_utils.h"

void	ft_free_list(void **list)
{
	int	i;

	i = 0;
	while (list[i])
		free(list[i++]);
	free(list);
}
