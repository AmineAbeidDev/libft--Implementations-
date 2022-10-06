/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunner <gunner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:51:43 by aabeid            #+#    #+#             */
/*   Updated: 2022/10/06 14:53:07 by gunner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;
	t_list	*current;

	current = *lst;
	while (current)
	{
		tmp = current -> next;
		ft_lstdelone(current);
		current = tmp;
		tmp = NULL;
	}
	*lst = NULL;
}
