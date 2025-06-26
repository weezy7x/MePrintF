/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:17:06 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/26 12:17:07 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf_i(int n)
{
    int count = 0;
    
    // Gérer le cas spécial de INT_MIN (-2147483648)
    if (n == -2147483648)
    {
        count += ft_printf_c('-');
        count += ft_putnbr_base_unsigned(2147483648, "0123456789");
        return count;
    }
    
    if (n < 0)
    {
        count += ft_printf_c('-');
        n = -n;
    }
        count += ft_putnbr_base_unsigned((unsigned long)n, "0123456789");
    
    return count;
}