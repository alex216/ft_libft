/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:36:53 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:37:16 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_pow(int base, int exp)
{
	int	result;

	result = 1;
	while (exp--)
		result *= base;
	return (result);
}
