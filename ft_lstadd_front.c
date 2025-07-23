/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:49:22 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/22 21:44:57 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == 0 || new == 0)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	new = ft_lstnew("42");
// 	list = ft_lstnew("renato");
// 	ft_lstadd_front(&list, new);
// 	printf("%s\n", (char *)list->content);
// 	// list = list->next;
// 	printf("%s\n", (char *)list->content);
// 	new = ft_lstnew("renato");
// 	ft_lstadd_front(&list, new);
// 	new = ft_lstnew("quarenta e dois");
// 	ft_lstadd_front(&list, new);
// 	// list = list->next;
// 	// printf("%p\n", list);
// 	printf("size: %d\n", ft_lstsize(list));
// }
