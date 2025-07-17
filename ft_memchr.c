/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:33:50 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/17 16:04:56 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int c, size_t n)
{
	unsigned char	*searcher;
	size_t			i;

	i = 0;
	searcher = (unsigned char *) p;
	while (i < n)
	{
		if (searcher[i] == (unsigned char) c)
		{
			return (&searcher[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s1;

// 	s1 = "oieeee 42 são gonçalo";
// 	printf("s1: %p\nmemchr: %p", &s1[7], ft_memchr(s1, '4', 10));
// 	return (0);
// }
