/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:14:12 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/13 19:37:09 by ranhaia-         ###   ########.fr       */
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

int	main(void)
{
	char	dest[20] = "strogonoff";
	char	*src;

	// dest = "strogonoff";
	src = " de frango com batata palha";
	printf("dest len: %zu\n", ft_strlcat(dest, src, 27));
	printf("dest: %s", dest);
	return (0);
}
