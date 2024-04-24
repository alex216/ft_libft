/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is2.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.jp>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:46:29 by yliu              #+#    #+#             */
/*   Updated: 2024/04/24 20:47:03 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS2_H
# define IS2_H

# include <stdbool.h>

bool	ft_isblank(char c);
bool	ft_isquote(char c);
bool	ft_iswildcard(char c);
bool	ft_isreserved_word(char c);
bool	ft_ismetacharacter(char c);
bool	ft_isspecial_char(char c);

#endif
