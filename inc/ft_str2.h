/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:44:26 by yliu              #+#    #+#             */
/*   Updated: 2024/05/23 22:41:41 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR2_H
# define FT_STR2_H

# include "ft_math.h"
# include "ft_str.h"
# include <errno.h>

char	*ft_strjooin(int argc, const char *a, const char *b, ...);
int		ft_strcmp(const char *a, const char *b);
int		ft_hexstr_2_decimal(const char *hexstr);
#endif
