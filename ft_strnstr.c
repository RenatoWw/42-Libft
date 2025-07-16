/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:25:17 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/15 21:03:44 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		ln;
	int		counter;

	ln = ft_strlen((char *) little);
	if (ln == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		counter = 0;
		while (little[counter])
		{
			if (little[counter] != big[counter + i])
				break ;
			counter++;
		}
		if (counter == ln)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s1 = "felipe benini benigno";
// 	char	*s2 = "ben";

// 	printf("%s", ft_strnstr(s1, s2, 11));
// 	return (0);
// }
