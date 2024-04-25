/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:15:25 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:44:14 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*tmp;

	if (str == NULL)
		return (NULL);
	tmp = str;
	while (n > 0)
	{
		*tmp++ = (unsigned char)c;
		n--;
	}
	return (str);
}
