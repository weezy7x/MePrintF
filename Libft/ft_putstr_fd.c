/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:57:28 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/19 17:19:22 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	if (!s || fd < 0)
		return ;
	while (i < len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
