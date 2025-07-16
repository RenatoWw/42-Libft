/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:03:38 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/15 18:27:17 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*current;
	int		found;
	int		i;

	i = 0;
	found = 0;
	current = (char *) &s[i];
	while (s[i])
	{
		if (s[i] == c)
		{
			current = (char *) &s[i];
			found = 1;
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
	{
		current = (char *) &s[i];
		found = 1;
	}
	if (found == 1)
		return (current);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "renato reneiro renate";
// 	printf("%p\n%p", &str[20], ft_strrchr(str, 'e'));
// 	return (0);
// }
