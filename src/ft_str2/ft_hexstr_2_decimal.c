/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexstr_2_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:11:16 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:37:05 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str2.h"

static int	ft_hex_2_decimal(char hex)
{
	if (hex >= '0' && hex <= '9')
		return (hex - '0');
	if (hex >= 'a' && hex <= 'f')
		return (hex - 'a' + 10);
	if (hex >= 'A' && hex <= 'F')
		return (hex - 'A' + 10);
	return (0);
}

int	ft_hexstr_2_decimal(const char *hexstr)
{
	int	ans;
	int	len;

	len = ft_strlen(hexstr);
	if (!hexstr || !*hexstr)
		return (0);
	ans = ft_hex_2_decimal((*hexstr)) * ft_pow(16, len - 1)
		+ ft_hexstr_2_decimal(hexstr + 1);
	return (ans);
}
