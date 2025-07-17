/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:14:12 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/16 20:52:21 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	int		len;

	len = 0;
	while (dest[len])
		len++;
	i = 0;
	while (i < size && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + i);
}

// int	main(void)
// {
// 	char	dest[20] = "strogo";
// 	char	*src;

// 	// dest = "strogonoff";
// 	src = "noff";
// 	printf("dest len: %zu\n", ft_strlcat(dest, src, 4));
// 	printf("dest: %s", dest);
// 	return (0);
// }
