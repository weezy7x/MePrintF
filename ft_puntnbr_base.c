/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puntnbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:09:49 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/25 18:09:55 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int error_if(char *base)
{
    int i;
    int j;

    i = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return -1;

    while (base[i])
    {
        j = 1 + i;
        while (base[j])
        {
            if (base[i] == base[j] || base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] > 126)
                return -1;
            j++;
        }
        i++;
    }
    return i;
}

void ft_putnbr_base(int nbr, char *base)
{
    int lenbase;
    long nb;

    nb = nbr;
    lenbase = error_if(base);
    if (lenbase == -1)
        return;
    
    if (nb < 0)
    {
        ft_putchar_fd('-', 1);
        nb *= -1;
    
    if (nb >= lenbase)
    {
        ft_putnbr_base(nb / lenbase, base);
        ft_putchar_fd(base[nb % lenbase], 1);
    }
    else
        ft_putchar_fd(base[nb % lenbase], 1);
    }
}
