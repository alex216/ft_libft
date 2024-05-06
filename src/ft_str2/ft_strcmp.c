/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 23:13:00 by yliu              #+#    #+#             */
/*   Updated: 2024/05/04 23:15:28 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str2.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 && !s2)
		return (errno = EINVAL, 0);
	if (!s1)
		return (errno = EINVAL, -(unsigned char)s2[0]);
	if (!s2)
		return (errno = EINVAL, (unsigned char)s1[0]);
	while (s1[i] == s2[i])
	{
		if (s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
