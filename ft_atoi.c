/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:38:16 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/23 20:43:30 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		signal;
	long	num;

	signal = 0;
	num = 0;
	if (str == NULL)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	if (signal == 1)
		num *= -1;
	return (num);
}

// int	main(void)
// {
// 	// char	*num;

// 	// num = "-1";
// 	// printf("%d\n", ft_atoi(num));

// 	printf("ft:   %d\n", ft_atoi(((void*)0)));
// 	printf("atoi: %d\n", ft_atoi(((void*)0)));
// 	printf("ft:   %d\n", ft_atoi("\t\n\v\f\r + 42"));
// 	printf("atoi: %d\n", ft_atoi("\t\n\v\f\r + 42"));
// 	return (0);
// }
