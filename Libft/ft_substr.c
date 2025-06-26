/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:39:50 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/19 16:59:59 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	len_substring;
	char	*substring;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s <= start)
		return (ft_strdup(""));
	len_substring = len_s - start;
	if (len > len_substring)
		len = len_substring;
	substring = malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
