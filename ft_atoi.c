/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:38:16 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/16 19:07:46 by ranhaia-         ###   ########.fr       */
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
// 	char	*num;

// 	num = "-1";
// 	printf("%d", ft_atoi(num));
// 	// printf("%d\n", ft_atoi(" "));
// 	// printf("%d\n", ft_atoi("+"));
// 	// printf("%d\n", ft_atoi("-"));
// 	// printf("%d\n", ft_atoi(NULL));

// 	// printf("\n%d\n", ft_atoi("42a54"));
// 	// printf("%d\n", ft_atoi("-42b54"));
// 	// printf("%d\n", ft_atoi("a42"));
// 	// printf("%d\n", ft_atoi("a-42"));
// 	// printf("%d\n", ft_atoi("+-42"));
// 	// printf("%d\n", ft_atoi("-+42"));
// 	// printf("%d\n", ft_atoi("--42"));

// 	// printf("\n%d\n", ft_atoi(" 42"));
// 	// printf("%d\n", ft_atoi(" -42"));
// 	// printf("%d\n", ft_atoi(" +42"));
// 	// printf("%d\n", ft_atoi("\t\n\v\f\r 42"));
// 	// printf("%d\n", ft_atoi("42 "));

// 	// printf("\n%d\n", ft_atoi("2147483647"));
// 	// printf("%d\n", ft_atoi("-2147483648"));
// 	// printf("%d\n", ft_atoi("2147483648"));
// 	// printf("%d\n", ft_atoi("-2147483649"));
// 	// printf("%d\n", ft_atoi("9999999999"));
// 	return (0);
// }
