/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:28:34 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/26 11:28:35 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_p(void *ptr)
{
    int count = 0;
    unsigned long address;
    
    if (ptr == NULL)
    {
        count += write(1, "(nil)", 5);
        return count;
    }
    
    address = (unsigned long)ptr;
    
    count += write(1, "0x", 2);
    
    count += ft_putnbr_base_unsigned(address, "0123456789abcdef");
    
    return count;
}