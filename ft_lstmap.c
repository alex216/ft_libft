/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:56:54 by yliu              #+#    #+#             */
/*   Updated: 2023/09/28 22:39:58 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *p, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*tmp;

	if (p == NULL || f == NULL || del == NULL)
		return (NULL);
	first = p;
	while (p)
	{
		ft_lstadd_back(&first, f(p));
		tmp = p->next;
		ft_lstdelone(p, del);
		p = tmp;
	}
	return (first);
}

int	main(void)
{
	char	*elem1 = "Hello";
	char	*elem2 = "world";
	char	*elem3 = "student";
	int		elem4 = 42;
	char	*elem5 = "!!";

	t_list	*t1;
	t_list	*t2;
	t_list	*t3;
	t_list	*t4;
	t_list	*t5;

	t1->next = t2;
	t2->next = t3;
	t3->next = t4;
	t4->next = t5;

}

