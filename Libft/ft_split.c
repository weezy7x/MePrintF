/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:13:35 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/20 13:38:04 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_split(char **split, int words_allocated)
{
	int	i;

	i = 0;
	while (i < words_allocated)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	count_words(const char *str, char separator)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != separator && (i == 0 || str[i - 1] == separator))
			words++;
		i++;
	}
	return (words);
}

int	write_split(char **split, const char *str, char separator)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == separator)
			i++;
		else
		{
			j = 0;
			while (str[i + j] && str[i + j] != separator)
				j++;
			split[word] = ft_calloc(j + 1, sizeof(char));
			if (!split[word])
				return (free_split(split, word), 0);
			while (j-- > 0)
				split[word][j] = str[i + j];
			i += ft_strlen(split[word]);
			word++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = ft_calloc(words + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (!write_split(res, s, c))
		return (NULL);
	return (res);
}
