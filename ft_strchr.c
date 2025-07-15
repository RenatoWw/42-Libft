/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:52:51 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/15 14:56:49 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*s)
	{
		if (*s == c)
		{
			ptr = (char *) s;
			return (ptr);
		}
		else
			s++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str;

	str = "renatottt";
	printf("%p : ", ft_strchr(str, 't'));
	printf("%p", &str[4]);
	return (0);
}
