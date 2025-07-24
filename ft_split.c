/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranhaia- <ranhaia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:49:17 by ranhaia-          #+#    #+#             */
/*   Updated: 2025/07/24 15:39:29 by ranhaia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	start;
	int	trigger;

	words = 0;
	trigger = 0;
	start = 0;
	while (s[start])
	{
		if (s[start] != c && trigger == 0)
		{
			trigger = 1;
			words++;
		}
		if (s[start] == c)
			trigger = 0;
		start++;
	}
	return (words);
}

static int	find_end(int start, char const *s, char c)
{
	int	end;

	while (s[start] != c && s[start] != '\0')
	{
		if (s[start + 1] == c || s[start + 1] == '\0')
			end = start;
		start++;
	}
	return (end);
}

static char	**free_mem(char **words)
{
	int	i;

	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		word_count;
	int		start;
	int		end;

	words = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!words)
		return (NULL);
	start = 0;
	word_count = 0;
	while (s[start])
	{
		if ((start == 0 && s[start] != c)
			|| (s[start] != c && s[start - 1] == c))
		{
			end = find_end(start, s, c);
			words[word_count] = ft_calloc(end - start + 2, sizeof(char));
			if (!words[word_count])
				return (free_mem(words));
			ft_memcpy(words[word_count++], &s[start], end - start + 1);
		}
		start++;
	}
	return (words);
}

// int	main(void)
// {
// 	char	**result;
// 	char	*s1;

// 	s1 = "      split       this for   me  !       ";
// 	result = ft_split(s1, ' ');
// 	if (!result)
// 		printf("sucesso");
// 	printf("erro");
// 	// while (words[start])
// 	// {
// 	// 	printf("%s", words[start]);
// 	// 	start++;
// 	// }
// 	// printf("%s", words[start]);
// 	return (0);
// }
