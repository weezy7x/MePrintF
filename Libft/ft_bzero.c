/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:21:12 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/13 12:21:18 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *bloc, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)bloc;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
}
