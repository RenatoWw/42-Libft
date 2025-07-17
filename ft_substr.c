/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:40:08 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/17 17:34:59 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstring;
	size_t			i;
	unsigned int	strlen;

	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_calloc(1, 1));
	// if (len > strlen)
	// 	newstring = malloc(sizeof(char) * strlen + 1);
	// else
	newstring = malloc(sizeof(char) * len + 1);
	if (newstring == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		newstring[i] = s[start];
		i++;
		start++;
	}
	newstring[i] = '\0';
	return (newstring);
}

int	main(void)
{
	char	*str;
	char	*s;

	s = ft_strdup("0123456789");
	str = ft_substr(s, 9, 10);
	printf("%s", str);
	free(str);
	free(s);
	return (0);
}
