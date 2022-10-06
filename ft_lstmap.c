/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunner <gunner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:23:32 by aabeid            #+#    #+#             */
/*   Updated: 2022/10/06 14:59:02 by gunner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int(f)(int), void (*del)(void *))
{
	t_list	*list;
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	head = NULL;
	while (lst)
	{
		list = ft_lstnew(f(lst -> content));
		if (list == NULL)
			ft_lstclear(&head);
		ft_lstadd_back(&head, list);
		lst = lst -> next;
	}
	return (head);
}
