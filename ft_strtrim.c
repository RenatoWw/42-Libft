/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:25:49 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/21 13:46:47 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	int		j;
	char	*trimmed;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if (is_in_charset(s1[i], set) == 0)
			size++;
		i++;
	}
	trimmed = malloc(sizeof(char) * size + 1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_in_charset(s1[i], set) == 0)
			trimmed[j++] = s1[i];
		i++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("#$#$42 são gonçalo#$#$", "#$"));
// 	ft_strtrim("#$#$renato#$#$", "#$");
// 	return (0);
// }
