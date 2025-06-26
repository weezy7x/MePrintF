/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:53 by ebouvy            #+#    #+#             */
/*   Updated: 2025/04/09 15:14:55 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*destination;

	if (src == NULL)
		return (NULL);
	i = 0;
	destination = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (destination == NULL)
		return (NULL);
	while (src[i])
	{
		destination[i] = src[i];
		i++;
	}
	destination[i] = 0;
	return (destination);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("'%s'\n", ft_strdup("test"));
	printf("'%s'\n", ft_strdup(""));
	return (0);
}
*/
