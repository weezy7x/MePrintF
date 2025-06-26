/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:23:29 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/19 17:13:02 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*convert_dest;
	const char	*convert_src;

	convert_dest = (char *)dest;
	convert_src = (const char *)src;
	if (dest <= src)
	{
		while (n--)
			*convert_dest++ = *convert_src++;
	}
	else
	{
		while (n--)
			convert_dest[n] = convert_src[n];
	}
	return (dest);
}
