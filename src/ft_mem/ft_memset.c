/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:15:25 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 16:48:56 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

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
