/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:08:58 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/23 17:47:47 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (lst == NULL)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	while (lst != NULL)
	{
		ft_lstadd_back(&newlist, lst->content);
		del(lst->content);
		lst = lst->next;
	}
	return (newlist);
}

// int	main(void)
// {
// 	t_list	*new;

// 	new = ft_lstnew("oi");
// 	return (0);
// }
