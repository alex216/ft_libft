/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjooin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:54:56 by yliu              #+#    #+#             */
/*   Updated: 2024/04/25 10:45:28 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str2.h"
#include <stdarg.h>

char	*ft_strjooin(int argc, const char *a, const char *b, ...)
{
	const char	*tmp;
	char		*tmp2;
	char		*ans;
	va_list		ap;
	int			i;

	va_start(ap, b);
	ans = ft_strjoin(a, b);
	i = 2;
	while (i < argc)
	{
		tmp = va_arg(ap, const char *);
		tmp2 = ft_strjoin(ans, tmp);
		free(ans);
		ans = ft_strdup(tmp2);
		free(tmp2);
		i++;
	}
	va_end(ap);
	return (ans);
}
