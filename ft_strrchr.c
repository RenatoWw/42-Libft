/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:03:38 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/16 20:48:09 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*current;
	int				found;
	int				i;

	i = 0;
	found = 0;
	current = (unsigned char *) &s[i];
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			current = (unsigned char *) &s[i];
			found = 1;
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
	{
		current = (unsigned char *) &s[i];
		found = 1;
	}
	if (found == 1)
		return ((char *)current);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "tenato reneiro renate";
// 	printf("%c\n\n", 't' + 256);
// 	printf("%p\n%s", &str[0], ft_strrchr(str, 't' + 256));
// 	return (0);
// }
