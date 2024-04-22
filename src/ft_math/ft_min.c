/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:35:25 by yliu              #+#    #+#             */
/*   Updated: 2024/04/22 17:43:14 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static	int _min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	ft_min(int argc, int a, int b, ...)
{
	int	tmp;
	int	ans;
	va_list		ap;
	int			i;

	va_start(ap, b);
	ans = _min(a, b);
	i = 2;
	while (i < argc)
	{
		tmp = va_arg(ap, int);
		ans = _min(ans, tmp);
		i++;
	}
	va_end(ap);
	return (ans);
}
